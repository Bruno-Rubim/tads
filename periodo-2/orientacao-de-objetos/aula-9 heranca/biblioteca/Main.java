/*
Exercício prático sobre Herança:

Contexto:
Imagine que você está desenvolvendo um sistema de gerenciamento de uma biblioteca.0
Você tem diferentes tipos de itens que podem ser cadastrados, como
livros, revistas, mapas,
etc sendo que alguns são emprestáveis e outros não. Cada item tem informações
específicas, mas todos os itens compartilham algumas propriedades em comum.

Exercício:
Crie uma hierarquia de classes para representar os diferentes tipos de itens da biblioteca.
Comece com uma classe base chamada ItemBiblioteca que contenha as propriedades comuns a
todos os itens. Em seguida, crie classes filhas para representar os tipos específicos de
itens. Lembre que cada classe filha deve ter propriedades específicas.
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main{
    public static void main(String args[]){
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    }
    
    public void menu(BufferedReader reader) throws Exception{
        while(true){
            System.out.println("--Menu--");
        }
    }

    public void cadastrarItem(ItemGeral item, BufferedReader reader){
        item.setId(reader.readLine());
        item.setTitulo(reader.readLine());
        item.setAutor(reader.readLine());
        item.setAno(Integer.parseInt(reader.readLine()));
        item.setIdioma(reader.readLine());
        item.setEmprestavel(Boolean.parseBoolean(reader.readLine()));
        item.setDisponivel(Boolean.parseBoolean(reader.readLine()));
        item.setDataEmprestado(reader.readLine());
        item.setDataEntrega(reader.readLine());
    }

    public void cadastrarLivro(Livro livro, reader){
        cadastrarItem(livro, reader);
        
    }
}