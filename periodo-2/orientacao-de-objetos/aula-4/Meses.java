public class Meses{
    String nomesMeses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    public String selecionarMes(int num){
        if (num < 1 || num > 12) {
            return "";
        } else {
            return nomesMeses[num - 1];
        }
    }

}
