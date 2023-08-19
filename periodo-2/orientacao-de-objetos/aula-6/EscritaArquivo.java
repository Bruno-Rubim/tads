import java.io.BufferedWriter;
import java.io.FileWriter;

public class EscritaArquivo {
    public static void main(String args[]) throws Exception{
        String nomeArquivoSaida = "ArquivoSaida.csv";
        BufferedWriter arqGravacao = new BufferedWriter(new FileWriter(nomeArquivoSaida));

        String linha = "Produto;Preco;Estoque";
        arqGravacao.write(linha);
        arqGravacao.newLine();

        String nomeProduto = "Mause";
        String preco = "Mickey";
        String estoque = "2";
        linha = nomeProduto + ";" + preco + ";" + estoque;
        System.out.println();
        arqGravacao.write(linha);
        arqGravacao.newLine();

        nomeProduto = "Bause";
        preco = "Bickey";
        estoque = "Bois";
        linha = nomeProduto + ";" + preco + ";" + estoque;
        arqGravacao.write(linha);
        arqGravacao.close();
    }
}