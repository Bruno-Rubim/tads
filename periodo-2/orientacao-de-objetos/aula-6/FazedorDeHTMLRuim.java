import java.io.BufferedWriter;
import java.io.FileWriter;

public class FazedorDeHTML {


    public static void main(String args[]) throws Exception{
        String nomeArquivoSaida = "cores.html";
        BufferedWriter arquivoDeSaida = new BufferedWriter(new FileWriter(nomeArquivoSaida));

        String linha = "<html><head><title>Tabela de Cores HTML</title> <meta http-equiv='Content-Type' content='text/html; charset=UTF-8'></head><body><p>&nbsp;</p><h2 align='center'>Tabela de Cores HTML</h2><table width='400' align='center' border='1'><tr><th width='200' align='center'>Cor</th><th width='200' align='center'>Código Hexadecimal</th></tr>";
        arquivoDeSaida.write(linha);
        arquivoDeSaida.newLine();

        String hexRed = "";
        String hexGreen = "";
        String hexBlue = "";

        for(int i = 0;  i < 256; i+= 16){
            if (i == 0){
                hexRed = "00";
            } else {
                hexRed = Integer.toHexString(i);
            }
            for(int j = 0;  j < 256; j+= 16){
                if (j == 0){
                    hexGreen = "00";
                } else {
                    hexGreen = Integer.toHexString(j);
                }

                for(int k = 0;  k < 256; k+= 16){
                    if (k == 0){
                        hexBlue = "00";
                    } else {
                        hexBlue = Integer.toHexString(k);
                    }
                    String color = hexRed + hexGreen + hexBlue;
                    System.out.println(color);
                    String content = "<tr> <td bgcolor='#" + color + "'> <td align='center'>#" + color + "</td> </tr>";
                    arquivoDeSaida.write(content);
                    arquivoDeSaida.newLine();
                }
            }
        }
        arquivoDeSaida.close();
    }

}