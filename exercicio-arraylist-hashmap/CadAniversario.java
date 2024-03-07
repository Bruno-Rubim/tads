/*
Crie um programa que solicite o nome e a data de aniversário de um usuário (dd/mm), e guarde em um HashMap.

Como podem haver vários aniversariantes na mesma data, cada elemento do HashMap deve ter como chave a data e como valor um Arraylist de String, onde serão armazenados os nomes dos aniversariantes.

Deve ser possível:

-Adicionar aniversariante

-Listar as datas que contém aniversariantes

-Consultar os aniversariantes de uma determinada data
*/

import java.util.ArrayList;
import java.util.HashMap;

public class CadAniversario {
    private HashMap<String, ArrayList<String>> aniversarios = new HashMap<String, ArrayList<String>>();
    private Comm communication = new Comm();

    public static void main(String[] args) throws Exception{
        CadAniversario ca = new CadAniversario();
        ca.menu();
    }

    public void menu() throws Exception{
        boolean exit = false;
        String resp;
        while (!exit){
            resp = communication.menu();
            switch (resp) {
                case "0":
                    exit = true;
                    communication.sair();
                    break;
                case "1":
                    this.adicionarAniversariante();
                    break;
                case "2":
                    this.listarDatas();
                    break;
                case "3":
                    this.listarAniversariantes();
                    break;
                default:
                    communication.erroOpcao();
                    break;
            }
        }
    }

    public void adicionarAniversariante() throws Exception{
        String data = this.communication.solicitarData();
        String nome = this.communication.solicitarNome();
        if (!aniversarios.containsKey(data)){   
            ArrayList<String> arrayList = new ArrayList<String>();
            aniversarios.put(data, arrayList);
        }
        aniversarios.get(data).add(nome);
    }

    public void listarDatas(){
        if (!aniversarios.isEmpty()){
            for(String data : aniversarios.keySet()){
                communication.print(data);
            }
        } else {
            communication.erroNenhumaData();
        }
    }

    public void listarAniversariantes() throws Exception{
        String data = communication.solicitarData();
        if (aniversarios.containsKey(data)){   
            ArrayList<String> arrayList = aniversarios.get(data);
            for(int i = 0; i < arrayList.size(); i++){
                communication.print(arrayList.get(i));
            }           
        } else {
            communication.erroDataNaoExistente();
        }
    }
}
