public interface ImportacaoArquivos{
    void carregarConfiguracoes(String arqConfig)throws Exception; //setar os preços por kg
    void importarDados(String arqDadosEntrada)throws Exception;
}