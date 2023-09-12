<?php

define("DIR_PERSISTENCIA", "arquivos/cadastro.json");

function salvarDados(array $array){
    $json = json_encode($array);
    file_put_contents(DIR_PERSISTENCIA, $json);
}

function buscarDados() : array {
    $dados = array();

    if (file_exists(DIR_PERSISTENCIA) && (file_get_contents(DIR_PERSISTENCIA) != null)){
        $dadosArquivo = file_get_contents(DIR_PERSISTENCIA);
        $dados = json_decode($dadosArquivo, true);
    }

    return $dados;
}

?>