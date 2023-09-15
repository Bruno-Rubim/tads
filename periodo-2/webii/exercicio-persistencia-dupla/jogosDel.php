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

$jogos = buscarDados();

$index = -1;
for($i=0; $i<count($jogos); $i++){
    if($id == $jogos[$i]['id']){
        $index = $i;
        break;
    }
}

array_splice($jogos, $index, 1);

salvarDados($jogos);

header("location: index.php");
?>