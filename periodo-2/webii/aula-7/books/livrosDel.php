<?php

include_once("persistencia.php");

$id = "";
if (isset($_GET['id'])){
    $id = $_GET['id'];
}

if (!$id){
    print("Id não informado");
    exit;
}

$livros = buscarDados();

$index = -1;
for($i=0; $i<count($livros); $i++){
    if($id == $livros[$i]['id']){
        $index = $i;
        break;
    }
}

array_splice($livros, $index, 1);

salvarDados($livros);

header("location: index.php");
?>