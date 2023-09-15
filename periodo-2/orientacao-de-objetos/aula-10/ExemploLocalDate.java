import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class ExemploLocalDate {
    public static void main (String args[]){
        LocalDate data = LocalDate.now();
        System.out.println(data);

        LocalTime hora = LocalTime.now();
        System.out.println(hora);

        LocalDateTime dataHora = LocalDateTime.now();
        System.out.println(dataHora);

        DateTimeFormatter dataForm = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        System.out.println(dataHora.format(dataForm));

        LocalDate hoje = LocalDate.now();
        LocalDate amanha = hoje.plusDays(3);
        System.out.println(hoje.format(dataForm));
        System.out.println(amanha.format(dataForm));

        LocalTime horaAtual = LocalTime.now();
        LocalTime horaAntes = horaAtual.minusHours(2);
        DateTimeFormatter dataFormHora = DateTimeFormatter.ofPattern("HH:mm:ss");
        System.out.println(horaAtual.format(dataFormHora));
        System.out.println(horaAntes.format(dataFormHora));


        LocalDateTime algumaHoraAi = dataHora.plusDays(3).plusHours(5).minusMinutes(13);
        DateTimeFormatter dataFormDataHora = DateTimeFormatter.ofPattern("dd/MM/yy HH:mm:ss");
        System.out.println(algumaHoraAi.format(dataFormDataHora));

        LocalDate minhaData = LocalDate.parse("20/03/2013", dataForm);
        System.out.println(minhaData.format(dataForm));
        



        

    }
}