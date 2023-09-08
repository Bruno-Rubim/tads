import java.util.Calendar;
import java.util.GregorianCalendar;

public class ExemploCalendar {
    public static void main(String args[]){
        Calendar agora = Calendar.getInstance();
        Calendar vencimento = agora;
        vencimento.add(Calendar.MONTH, 7);
        
        GregorianCalendar data = new GregorianCalendar();
        String dtNsc = "04/09/2000";
        String[] vetDtNsc = dtNsc.split("/");
        data.set(Calendar.YEAR, Integer.parseInt(vetDtNsc[2]));
        System.out.println(data);
    }
}