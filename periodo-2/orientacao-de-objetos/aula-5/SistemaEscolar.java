import java.io.BufferedReader;
import java.io.InputStreamReader;

public class SistemaEscolar {
    private Escola e1;
    BufferedReader reader;

    public static void main(String[] args) throws Exception{
        SistemaEscolar se = new SistemaEscolar();
        se.e1 = new Escola();
        se.reader = new BufferedReader(
            new InputStreamReader(System.in));
        
        System.out.println("Insira o nome da escola: ");
        se.e1.setNome(se.reader.readLine());
        System.out.println("Insira o telefone da escola: ");
        se.e1.setTelefone(se.reader.readLine());
        se.menu();
    }~

    //menu
    private void menu() throws Exception{
        String resp = "";
        while(!resp.equals("0")){

            System.out.println("");
            System.out.println("--MENU--");
            System.out.println("");
            System.out.println("Opções:");
            System.out.println("0. Sair");
            System.out.println("1. Cadastrar turma");
            System.out.println("2. Listar turmas");
            System.out.println("3. Consultar turma");
            resp = this.reader.readLine();
            switch(resp){
                case "1":
                    this.cadastrarTurma(e1);
                    break;
                case "2":
                    this.listarTurmas(e1);
                    break;
                case "3":
                    this.consultarTurma(e1);
                    break;
                default:
                    break;
            }
        }
    }

    //cadastrar turmas
    private void cadastrarTurma(Escola escola) throws Exception{
        Turma turma = new Turma();
        
        System.out.println("");
        System.out.println("--CADASTRO DE TURMA--");
        System.out.println("");
        System.out.println("Numero da turma: ");
        turma.setNumTurma(Integer.parseInt(reader.readLine()));
        System.out.println("Nome do curso: ");
        turma.setNomeCurso(reader.readLine());
        System.out.println("Ano:");
        turma.setAno(Integer.parseInt(reader.readLine()));
        
        System.out.println("");
        System.out.println("--CADASTRO DE ALUNOS--");
        System.out.println("");
        
        for (int i = 0; i < 40; i++) {
            System.out.println("Nome: ");
            String nome = reader.readLine();
            if (nome.equals("")) {
                break;
            }
            Aluno aluno = new Aluno();
            aluno.setNome(nome);

            System.out.println("Matricula: ");
            String matricula = reader.readLine();
            aluno.setMatricula(matricula);

            System.out.println("Nota1:");
            float nota1 = Float.parseFloat(reader.readLine());
            aluno.setNota1(nota1);

            System.out.println("Nota2:");
            float nota2 = Float.parseFloat(reader.readLine());
            aluno.setNota2(nota2);

            System.out.println("Nota3:");
            float nota3 = Float.parseFloat(reader.readLine());
            aluno.setNota3(nota3);

            turma.setAluno(aluno);
        }
        escola.setTurma(turma);
    }

    //listar turmas
    private void listarTurmas(Escola escola) throws Exception{
        System.out.println("");
        for (int i = 0; i < escola.getQntTurmas(); i++){
            Turma turma = new Turma();
            turma = escola.getTurma(i);
            System.out.println("Numero: " + turma.getNumTurma() + " Curso: " + turma.getNomeCurso() + " Ano: " + turma.getAno());
        }
    }

    //consultar turma
    private void consultarTurma(Escola escola) throws Exception{
        System.out.println("");
        System.out.println("--Consultar Turma--");
        System.out.println("");
        System.out.println("Numero da turma:");
        int numTurma = Integer.parseInt(reader.readLine());
        boolean achou = false;
        for (int i = 0; i < escola.getQntTurmas(); i++) {
            Turma turma = escola.getTurma(i);
            if (escola.getTurma(i).getNumTurma() == numTurma){
                System.out.println("");
                System.out.println("--ALUNOS DA TURMA--");
                System.out.println("");
                int posAluno = 0;
                while (turma.getAluno(posAluno) != null){
                    Aluno aluno = escola.getTurma(i).getAluno(posAluno);
                    String linha = "Nome: " + aluno.getNome() + " Matricula: " + aluno.getMatricula();
                    System.out.println(linha);
                    System.out.println("");
                    posAluno++;
                }
                achou = true;
                break;
            }
        }
        if (!achou){
            System.out.println("puts :/");
        }
    }
}
