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
    9) Alterar os dados de um funcionário (informado pelo usuário através do nome.); Dentro da opção
    de Alterar, será necessário incluir um novo menu solicitando qual dos campos se deseja alterar
    (identificar os campos por número como opções do menu) e o usuário pode escolher somente um
    campo por vez, mas o menu deve permanecer enquanto o usuário não escolher a opção de sair
    do modo de edição.
    10) Por fim, o programa permitirá ao usuário escolher entre funcionalidades (cadastro, cálculo de
    salário, quantidade maior que a média, e edição e visualização das informações de um
    determinado funcionário). O usuário poderá escolher as funcionalidades por meio de um menu,
    podendo repeti-las até que ele deseje sair do programa.

    feito

*/

#include <stdio.h>
#include <math.h>
#include <string.h>
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

int lerNumCadastros(){
    int n;
    printf("Insira o numero de cadastros: ");
    scanf("%d%*c", &n);
    printf("\n");
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
    printf("%d funcionario(s) com o salario acima da media\n\n", n);
    return n;
}

void alterarDados(struct TFuncionario cadastro[], int size){
    char nome[NAME_LENGTH];
    int resp = 0;
    printf("Insira o nome do funcionario ");
    lerStr(nome, NAME_LENGTH);
    printf("\n");

    int i = 0;
    while (i < size && strcmp(cadastro[i].nome, nome)) {
        i++;
    }
    if (i >= size) {
        puts("Nome nao encontrado\n");
    } else {
        int done = 0;
        while (!done) {
            printf("1. Nome: %s\n", cadastro[i].nome);
            printf("2. Grau de estudo: %d\n", cadastro[i].grauEstudo);
            printf("3. Quantidades de linguas que fala: %d\n", cadastro[i].linguas);
            printf("4. Nivel do cargo que ocupa: %d\n", cadastro[i].cargoNivel);
            printf("5. Indice de produtividade: %g\n", cadastro[i].produtividade);
            printf("\nInsira a informacao a ser alterada ou 0 para sair: ");
            scanf("%d%*c", &resp);
            switch (resp) {
            case 1:
                printf("Insira o novo nome: ");
                lerStr(cadastro[i].nome, NAME_LENGTH);
                break;
            case 2:
                printf("Insira o novo grau de estudo: ");
                scanf("%d", &cadastro[i].grauEstudo);
                break;
            case 3:
                printf("Insira a nova quantidade de linguas: ");
                scanf("%d", &cadastro[i].linguas);
                break;
            case 4:
                printf("Insira o novo nivel do cargo: ");
                scanf("%d", &cadastro[i].cargoNivel);
                break;
            case 5:
                printf("Insira o novo indice de produtividade: ");
                scanf("%f", &cadastro[i].produtividade);
                break;
            default:
                done = 1;
                break;
            }
            printf("\n");
        }
        updateSalario(&cadastro[i]);        
    }
}

void lerDadosCadastros(struct TFuncionario cadastro[], int size){
    for (int i = 0; i < size; i++){
        printf("Insira o nome: ");
        lerStr(cadastro[i].nome, sizeof(cadastro[i].nome));
        printf("Insira o grau de estudo: ");
        scanf("%d", &cadastro[i].grauEstudo);
        printf("Insira a quantidade de linguas que fala: ");
        scanf("%d", &cadastro[i].linguas);
        printf("Insira o nivel do cargo: ");
        scanf("%d", &cadastro[i].cargoNivel);
        printf("Insira o indice de produtividade: ");
        scanf("%f%*c", &cadastro[i].produtividade);
        updateSalario(&cadastro[i]);        
        printf("\n");
    }
}

void calcularSalario(struct TFuncionario cadastro[], int size){
    char nome[NAME_LENGTH];
    printf("Insira o nome do funcionario: ");
    lerStr(nome, NAME_LENGTH);
    int i = 0;
    while (i < size && strcmp(cadastro[i].nome, nome)) {
        i++;
    }
    if (i >= size) {
        puts("Nome nao encontrado\n");
    } else {
        updateSalario(&cadastro[i]);
        printf("\nSalario de %s R$:%.2f\n\n", nome, cadastro[i].salario);
    }
}

void menu(struct TFuncionario cadastro[], int size) {
    int quit = 0, respMenu;
    while (!quit) {
        puts("1. Calculo de salario");
        puts("2. Numero de funcionarios acima da media");
        puts("3. Alterar/Vizualizar dados de um cadastro");
        puts("0. Sair");
        puts("");
        printf("Insira a operacao desejada: ");
        scanf("%d%*c", &respMenu);
        printf("\n");
        switch (respMenu) {
        case 1:
            calcularSalario(cadastro, size);
            break;
        case 2:
            qtdAcimaMedia(cadastro, size);
            break;
        case 3:
            alterarDados(cadastro, size);
            break;
        case 0:
            quit = 1;
            break;
        default:
            printf("Operacao nao encontrada");
            break;
        }
    }
}

int main(){

    puts("Bem vindo ao programa de cadastro");
    int numCadastros = lerNumCadastros();
    struct TFuncionario cadastro[numCadastros];
    lerDadosCadastros(cadastro, numCadastros);
    menu(cadastro, numCadastros);

    return 0;
}