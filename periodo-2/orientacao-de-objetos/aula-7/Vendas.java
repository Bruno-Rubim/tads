import java.io.BufferedReader;
import java.io.FileReader;

public class Vendas{
    public static void main(String args[]) throws Exception{
        String nomeArquivoEntrada = "vendas.csv";
        BufferedReader arqLeitura = new BufferedReader(new FileReader(nomeArquivoEntrada));

        String linha;
        String elementos[] = new String[4];
        float totalGeral = 0;
        float totalVista = 0;
        float totalPraso = 0;

        String ignore = arqLeitura.readLine();

        while ((linha = arqLeitura.readLine()) != null){
            linha = linha.replace(",", ".");
            elementos = linha.split(";");
            float valorAtual = Float.parseFloat(elementos[2]);
            String tipoVenda = elementos[3];
            totalGeral += valorAtual;
            if (tipoVenda.equals("V")){
                totalVista += valorAtual;
            } else {
                totalPraso += valorAtual;
            }
        }
        System.out.println("Total Geral: " + totalGeral);
        System.out.println("Total a vista: " + totalVista);
        System.out.println("Total a praso: " + totalPraso);
        arqLeitura.close();
    }
}