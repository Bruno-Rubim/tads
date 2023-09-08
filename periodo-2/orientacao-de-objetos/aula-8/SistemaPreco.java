/*
Crie um programa que gere um arquivo csv com a lista de preços de venda preco_venda.csv dos produtos de uma loja:
-A lista de preços deve conter: código, nome produto, preço de venda
-O formato do arquivo de entrada é: codigo, estoque, nome produto, preço de custo e categoria (para teste usar o arquivo preco_custo.csv)
-O programa deve solicitar ao usuário a margem de lucro a ser aplicada aos produtos
-Solicitar ao usuario o nome do arquivo de entrada e de saida, caso o usuário deixe em branco o nome dos arquivos de entrada e saída, usar os nomes padrão (preco_custo.csv, preco_venda.csv)

-Gerar um segundo arquivo de saida (chamado comprar.csv) que contenha os itens com estoque inferior a 10 unidades, e os mesmos campos do arquivo de entrada.
*/

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.FileWriter;

public class SistemaPreco {
    String nameFileRead;
    String nameFileWrite;
    BufferedReader inputReader;
    BufferedReader fileReader;
    BufferedWriter fileWriter;
    BufferedWriter fileWriterComprar;

    public static void main(String args[]) throws Exception{
        SistemaPreco sstm = new SistemaPreco();
        sstm.nameFileRead = "preco_custo.csv";
        sstm.nameFileWrite = "preco_venda_default.csv";
        sstm.inputReader = new BufferedReader(new InputStreamReader(System.in));

        String resp;

        System.out.println("Deseja ler o arquivo padrão? S/N");
        resp = sstm.inputReader.readLine();

        if (resp.equals("n")){
            System.out.println("Insira o nome do arquivo:");
            sstm.nameFileRead = sstm.inputReader.readLine();
        }

        System.out.println("Deseja criar um novo arquivo? S/N");
        resp = sstm.inputReader.readLine();

        if (resp.equals("s")){
            System.out.println("Insira o nome do arquivo:");
            sstm.nameFileWrite = sstm.inputReader.readLine();
        }

        sstm.fileReader = new BufferedReader(new FileReader(sstm.nameFileRead));
        sstm.fileWriter = new BufferedWriter(new FileWriter(sstm.nameFileWrite));
        sstm.fileWriterComprar = new BufferedWriter(new FileWriter("comprar.csv"));

        System.out.println("Insira a porcentagem de lucro: ");
        resp = sstm.inputReader.readLine();
       
        sstm.writeSaleFile(sstm, Float.parseFloat(resp));

        sstm.fileReader.close();
        sstm.fileWriter.close();
        sstm.fileWriterComprar.close();
    }
    
    private void writeSaleFile(SistemaPreco sstm, float lucro) throws Exception{
        String line = sstm.fileReader.readLine();
        sstm.fileWriter.write(line);
        sstm.fileWriter.newLine();

        while ((line = sstm.fileReader.readLine()) != null) {
            line = line.replace(',', '.');
            String elementos[] = line.split(";");
            Float preco = Float.parseFloat(elementos[3]) * (1 + (lucro/100));
            elementos[3] = String.format("%.02f", preco);
            elementos[3] = elementos[3].replace('.', ','); 
            line = elementos[0] + ";" + elementos [1] + ";" + elementos [2] + ";" + elementos[3] + ";" + elementos [4];
            sstm.fileWriter.write(line);
            sstm.fileWriter.newLine();
            System.out.println(elementos[1]);
            if ((Integer.parseInt(elementos[1])) < 10) {
                System.out.println(line);
                sstm.fileWriterComprar.write(line);
                sstm.fileWriterComprar.newLine();
            }
        }
    }
}