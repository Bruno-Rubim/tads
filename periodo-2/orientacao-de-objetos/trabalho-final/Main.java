/*
Avaliação Interfaces e Polimorfismo [Validação e Entrega dias 02/10 e 06/10]
Contexto:

Uma transportadora precisa de um sistema capaz de importar arquivos de encomendas 
e calcular os valores de frete levando em consideração um determinado conjunto de regras.

Nesse contexto, crie um programa que realize as operações solicitadas a seguir,
utilizando os conceitos de herança, encapsulamento, interface e polimorfismo.

O que o programa deve fazer:

-Ao iniciar o programa{
    o nome do arquivo de configuração deve ser solicitado ao usuário 
    e os dados presentes nesse arquivo devem ser usados para setar o valor do frete.
}

No arquivo de configurações, cada linha é um parâmetro no formato:
Tipo Encomenda;Sigla Tipo;Preco kg

-Em seguida, deve ser exibido um menu com 3 opções{
    Importar arquivo de encomendas
    Exibir a lista de encomendas Normais
    Exibir a lista de encomendas Expressas
}

Quanto às ações dos menus{
    Importar arquivo de encomendas{
        Solicitar o nome de um arquivo de dados
        e alimentar os vetores de encomendas
        (cada vetor deve ter 1000 posições e ser capaz de armazenar objetos de seu tipo de encomenda correspondente). 
        Deve ser possível importar vários arquivos, sem que os dados de um arquivo apaguem os dados que já estão no vetor.
    }
}

Os dois métodos que exibem as listas de encomendas devem mostrar um item por linha, com os seguintes dados{
    Nro pedido, Peso, Valor do Frete
}

Orientações gerais{
    A classe Transportadora deve Implementar a interface ImportacaoArquivos, que possui a seguinte definição de métodos{
        carregarConfiguracoes(String arqConfig)
        importarDados(String arqDadosEntrada)
    }

    Na classe Transportadora{
        criar um vetor para encomendas expressas
        e outro para encomendas normais.
    }

    Criar uma classe para encomendas normais{
        que armazena Nro pedido
        Data postagem
        e Peso. 
        Além disso, calcula o valor do frete.
    }

    Criar uma classe para encomendas expressas{
        que herda da classe encomenda 
        e além disso armazena o prazo de entrega
        e fone de contato do recebedor.
        Além disso, calcula o valor do frete.
    }
}

Regras de cálculo do valor do frete{
    if(Se é normal){
        multiplica o peso pelo preço por KG.
    } else if (Se é expressa){
        if (Caso o prazo de entrega >= 3){
            multiplica peso pelo preço por KG.
        } else {
            multiplica peso pelo preço por KG, e acrescenta 25%.
        }
    } 
}

Estrutura dos arquivos{
    Arquivo de configuração{
        Tipo Encomenda;Sigla Tipo;Preco kg
        Normal;EN;12
        Expressa;EE;36
    }
    
    Arquivos de dados{
        Nro pedido;Data postagem;Tipo encomenda;Prazo Entrega;Peso;Fone Contato
        123;11/03/2022;EN;;2.32;
        332;10/03/2022;EE;2;1.5;(45)9999-0101
    }
}
*/

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.BufferedWriter;
import java.io.FileWriter;

public class Main{
    public static void main(String args[]) throws Exception{

    }

    public String solicitarArquivo(BufferedReader reader) throws Exception{

    }
}