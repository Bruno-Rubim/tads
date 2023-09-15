import java.io.BufferedReader;
import java.io.InputStreamReader;

public class SistemaCompanhiaAerea {
    private Companhia c1;
    BufferedReader reader;

    public static void main(String args[]) throws Exception{
        SistemaCompanhiaAerea sca = new SistemaCompanhiaAerea();
        sca.c1 = new Companhia();
        sca.reader = new BufferedReader(
            new InputStreamReader(System.in));
     
        System.out.println("Insira o nome da Companhia Aerea: ");
        sca.c1.setName(sca.reader.readLine());
        System.out.println("Insira a localizacao da Companhia Aerea: ");
        sca.c1.setLocal(sca.reader.readLine());
        sca.menu();
    }

    private void menu() throws Exception{
        String resp = "";
        while (!resp.equals("0")){
            System.out.println("");
            System.out.println("--MENU--");
            System.out.println("");
            System.out.println("Opções:");
            System.out.println("0. Sair");
            System.out.println("1. Cadastrar Voo");
            System.out.println("2. Listar Voos");
            System.out.println("3. Consultar Voo");
            resp = this.reader.readLine();
            switch(resp){
                case "1":
                    this.cadastrarVoo(c1);
                    break;
                case "2":
                    this.listarVoos(c1);
                    break;
                case "3":
                    this.consultarVoo(c1);
                    break;
                default:
                    break;
            }
        }
    }

    private void cadastrarVoo(Companhia companhia) throws Exception{
        Voo voo = new Voo();

        System.out.println("");
        System.out.println("--CADASTRO DE VOO--");
        System.out.println("");
        System.out.println("Numero de identificacao do voo");
        voo.setId(Integer.parseInt(reader.readLine()));
        System.out.println("Horario de partida [xx:xx]");
        voo.setTime(reader.readLine());
        System.out.println("Destino do Voo");
        voo.setDestino(reader.readLine());
        
        System.out.println("");
        System.out.println("--CADASTRO DE PASSAGEIROS--");
        System.out.println("");
        
        for (int i = 0; i < 60; i++) {
            System.out.println("Nome: ");
            String name = reader.readLine();
            if (name.equals("")) {
                break;
            }
            Passageiro passageiro = new Passageiro();
            passageiro.setName(name);

            System.out.println("Numero de identificacao: ");
            int id = Integer.parseInt(reader.readLine());
            passageiro.setId(id);

            voo.setPassageiro(passageiro);
        }
        companhia.setVoo(voo);
    }

    private void listarVoos(Companhia companhia){
        System.out.println("");
        for (int i = 0; i < companhia.getQtdVoos(); i++){
            Voo voo = new Voo();
            voo = companhia.getVoo(i);
            System.out.println("Id: " + voo.getId() + " partida às: " + voo.getTime() + " com destino a " + voo.getDestino());
        }
    }

    private void consultarVoo(Companhia companhia) throws Exception{
        System.out.println("");
        System.out.println("--Consultar Voo--");
        System.out.println("");
        System.out.println("Numero de identificacao do voo:");
        int id = Integer.parseInt(reader.readLine());
        boolean found = false;
        for (int i = 0; i < companhia.getQtdVoos(); i++) {
            Voo voo = companhia.getVoo(i);
            if (companhia.getVoo(i).getId() == id){
                System.out.println("");
                System.out.println("--PASSAGEIROS--");
                System.out.println("");
                int posPassageiro = 0;
                while (voo.getPassageiro(posPassageiro) != null){
                    Passageiro passageiro = companhia.getVoo(i).getPassageiro(posPassageiro);
                    String linha = "Nome: " + passageiro.getName() + " Identificacao: " + passageiro.getId();
                    System.out.println(linha);
                    System.out.println("");
                    posPassageiro++;
                }
                System.out.println(60 - voo.getQtdPassageiros() + "assentos restantes");
                found = true;
                break;
            }
        }
        if (!found){
            System.out.println("Voo nao encontrado");
        }

    }
}