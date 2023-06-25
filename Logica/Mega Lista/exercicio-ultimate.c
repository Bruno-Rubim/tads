/*
    Desenvolva um programa capaz de obter os seguintes dados de pessoas que trabalham em uma
    empresa: (a) nome; (b) grau de estudo: 1, 2, 3, 4 ou 5; (c) quantidade de línguas que fala; (d)
    cargo que ocupa: 1º, 2º, 3º ou 4º nível; (e) seu índice de produtividade: entre 0 e 1,0.
    Baseado nisto, o programa deve atender aos seguintes requisitos:
    1) Os dados das pessoas devem ser tratados por uma struct chamada Funcionario.
    2) A estrutura Funcionario também deve comportar o salário do funcionário, a ser calculado a
    pedido do usuário.
    3) O usuário informará quantas pessoas trabalham na empresa, o que implica em alocar uma
    quantia de memória apropriada (n) para ‘variáveis’ do tipo Funcionario.
    4) O cálculo do salário será feito segundo um conjunto de fatores, sendo um primeiro fator a
    formação. Este fator deve ser calculado em uma função que retorna o fatorial do grau de
    instrução da pessoa (1º, 2º, 3º, 4º ou 5º grau).
    5) Outro fator será chamado de poliglota e será calculado por uma função que recebe a
    quantidade de línguas faladas pela pessoa e a eleva ao cubo, retornando isto como resultado.
    6) Há ainda o fator salário base que varia conforme o nível da pessoa. Por exemplo, nível 1 (R$
    1.000,00), nível 2 (R$ 1.500,00), nível 3 (R$ 2.000,00) e assim por diante. O fator salário base é
    calculado em uma função que recebe como parâmetro o nível e retorna o salário base.
    7) O salário será calculado, em uma função, pela seguinte regra:
    Se Índice de Produtividade > 0,7 então
    Salário = (Salário base + (Formação*100) + (Poliglota*100)) + (Salário base* Índice de
    Produtividade).
    Se Índice de Produtividade entre 0,4 e 0,7 então
    Salário = (Salário base + (Formação*100) + (Poliglota*100))
    Se Índice de Produtividade < 0,4 então
    Salário = (Salário base + (Formação*100) + (Poliglota*100)) - (Salário base* (0,4 - Índice de
    Produtividade))
    8) O programa deve ainda disponibilizar, também por uma função, a quantidade de funcionários
    que ganham acima da média.

    feito

    9) Alterar os dados de um funcionário (informado pelo usuário através do nome.); Dentro da opção
    de Alterar, será necessário incluir um novo menu solicitando qual dos campos se deseja alterar
    (identificar os campos por número como opções do menu) e o usuário pode escolher somente um
    campo por vez, mas o menu deve permanecer enquanto o usuário não escolher a opção de sair
    do modo de edição.

    10) Por fim, o programa permitirá ao usuário escolher entre funcionalidades (cadastro, cálculo de
    salário, quantidade maior que a média, e edição e visualização das informações de um
    determinado funcionário). O usuário poderá escolher as funcionalidades por meio de um menu,
    podendo repeti-las até que ele deseje sair do programa.
*/

#include <stdio.h>
#include <math.h>
#define NAME_LENGTH 30

struct TFuncionario{
    char nome[NAME_LENGTH];
    int grauEstudo;
    int linguas;
    int cargoNivel;
    float produtividade;
    float salario;
};

void lerStr(char str[], int size) {
    fgets(str, size, stdin);
    for (int i = 0; i < size; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
        }
    }
}

int iniciarCadastro(){
    int n;
    printf("Insira o numero de cadastros: ");
    scanf("%d%*c", &n);
    return n;
}

int factorial(int num){
    for (int i = num-1; i > 0; i--) {
        num *= i;
    }
    return num;
}

int salarioBase(int nivel){
    return 500 + (500 * nivel);
}

void updateSalario(struct TFuncionario* cadastro){
    int nivel = (*cadastro).cargoNivel;
    int estudo = (*cadastro).grauEstudo;
    int linguas = (*cadastro).linguas;
    float prod = (*cadastro).produtividade;
    if ((*cadastro).produtividade > 0.7){
        (*cadastro).salario = (salarioBase(nivel) + (estudo *100) + (pow(linguas, 3)*100)) + (salarioBase(nivel)* prod);
    } else if (prod < 0.4) {
        (*cadastro).salario = (salarioBase(nivel) + (estudo*100) + (pow(linguas, 3)*100)) - (salarioBase(nivel)* (0.4 - prod));
    } else {
        (*cadastro).salario = (salarioBase(nivel) + (estudo*100) + (pow(linguas, 3)*100));
    }
}

int qtdAcimaMedia(struct TFuncionario cadastro[], int size){
    int alt = 0, sum = 0, n = 0;
    for (int i = 0; i < size; i++){
        switch (alt)
        {
        case 0:
            sum += cadastro[i].salario;
            if (i == size -1) {
                i = -1;
                alt++;
            }
            break;
        case 1:
            if (cadastro[i].salario > sum/size){
                n++;
            }
            break;
        }
    }
    printf("%d", n);
    return n;
}

void alterarDados(struct TFuncionario cadastro[], int size){
    char nome[NAME_LENGTH];
    printf("Insira o codigo da pessoa a ser alterada: ");
    lerStr(nome, NAME_LENGTH);
    int i = 0;
    while (i < size && !strcmp(cadastro[i].nome, nome)) {
        i++;
    }
    /*
    if (i >= n) {
        puts("Nome nao encontrado");
    } else {
        int done = 0;
        while (!done) {
            printf("1. Codigo: %d\n", cadastro[i].codigo);
            printf("2. Nome: %s\n", cadastro[i].nome);
            printf("3. Idade: %d\n", cadastro[i].idade);
            printf("4. Genero: %c\n", cadastro[i].genero);
            printf("5. Altura: %g\n", cadastro[i].altura);
            printf("6. Peso: %g\n", cadastro[i].peso);
            printf("Insira a informacao a ser alterada ou 0 para sair: ");
            scanf("%d%*c", &respInt);
            switch (respInt) {
            case 1:
                printf("Insira o novo codigo: ");
                scanf("%d", &cadastro[i].codigo);
                break;
            case 2:
                printf("Insira o novo nome: ");
                lerStr(cadastro[i].nome);
                break;
            case 3:
                printf("Insira a nova idade: ");
                scanf("%d", &cadastro[i].idade);
                break;
            case 4:
                printf("Insira o novo genero: ");
                scanf(" %c", &cadastro[i].genero);
                break;
            case 5:
                printf("Insira a nova altura: ");
                scanf("%f", &cadastro[i].altura);
                break;
            case 6:
                printf("Insira o novo peso: ");
                scanf("%f", &cadastro[i].peso);
                break;
            default:
                done = 1;
                break;
            }
        }
    }
            */
}

void lerDadosCadastros(struct TFuncionario cadastro[], int size){
    for (int i = 0; i < size; i++){
        printf("insira o nome: ");
        lerStr(cadastro[i].nome, sizeof(cadastro[i].nome));
        printf("insira o grau de estudo: ");
        scanf("%d", &cadastro[i].grauEstudo);
        printf("insira a quantidade de linguas que fala: ");
        scanf("%d", &cadastro[i].linguas);
        printf("insira o nivel do cargo: ");
        scanf("%d", &cadastro[i].cargoNivel);
        printf("insira a produtividade: ");
        scanf("%f%*c", &cadastro[i].produtividade);
        updateSalario(&cadastro[i]);        
        printf("\n");
    }
}

int main(){

    int numCadastros = iniciarCadastro();
    struct TFuncionario cadastro[numCadastros];
    lerDadosCadastros(cadastro, numCadastros);
    qtdAcimaMedia(cadastro, numCadastros);

    return 0;
}