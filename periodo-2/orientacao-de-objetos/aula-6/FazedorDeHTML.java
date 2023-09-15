import java.io.BufferedWriter;
import java.io.FileWriter;

public class FazedorDeHTML {


    public static void main(String args[]) throws Exception{
        String nomeArquivoSaida = "cores.html";
        BufferedWriter arquivoDeSaida = new BufferedWriter(new FileWriter(nomeArquivoSaida));

        String linha = "<html><head><title>Tabela de Cores HTML</title> <meta http-equiv='Content-Type' content='text/html; charset=UTF-8'></head><body><p>&nbsp;</p><h2 align='center'>Tabela de Cores HTML</h2><table width='400' align='center' border='1'><tr><th width='200' align='center'>Cor</th><th width='200' align='center'>Código Hexadecimal</th></tr>";
        arquivoDeSaida.write(linha);
        arquivoDeSaida.newLine();

        for(int i = 0;  i < 16; i++){
            for(int j = 0;  j < 16; j++){
                for(int k = 0;  k < 16; k++){
                    String color = Integer.toHexString(i) + "0" + Integer.toHexString(j) + "0" + Integer.toHexString(k) + "0"; 
                    String content = "<tr> <td bgcolor='#" + color + "'> <td align='center'>#" + color + "</td> </tr>";
                    arquivoDeSaida.write(content);
                    arquivoDeSaida.newLine();
                }
            }
        }
        arquivoDeSaida.write("</table></body></html>");
        arquivoDeSaida.close();
    }

}