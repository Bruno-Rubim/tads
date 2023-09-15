import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

public class ExemploDate{
    public static void main(String args[]){
        Date agora = new Date();
        System.out.println(agora);

        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println(sdf.format(agora));

        DateFormat df = DateFormat.getDateInstance(DateFormat.FULL);
        System.out.println(df.format(agora));
    }
}