public class Gerente extends Funcionario{
    private String listaDeTarefas[];

    public String getTarefaDaLista(int pos){
        return listaDeTarefas[pos];
    }
    public void setTarefaDaLista(String tarefa){
        this.listaDeTarefas.push(tarefa);
    }
}