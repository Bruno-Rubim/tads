<?php 

//1. Escreva um programa em PHP que exiba uma progressão aritmética. Ele deve receber pelo
// método GET os seguintes parâmetros:
// inicio = número do início da progressão aritmética
// razao = razão da progressão aritmética
// quantidade = quantidade de números (termos) da progressão aritmética.
// Caso os 3 parâmetros tenham sido enviados, exiba a progressão aritmética requisitada. Caso
// contrário, exiba um mensagem informando qual ou quais parâmetros não foram informados.

$ini = 0;
$raz = 0;
$qtd = 0;



if (isset($_GET['inicio'])){
    $ini = $_GET['inicio'];
} else {
    print("Valor de inicio auxente <br>");
}
if (isset($_GET['razao'])){
    $raz = $_GET['razao'];
} else {
    print("Valor da razao auxente <br>");
}
if (isset($_GET['quantidade'])){
    $qtd = $_GET['quantidade'];
} else {
    print("Valor de quantidade auxente <br>");
}

$result = $ini;

if ($ini && $raz && $qtd){
    for ($i = 0; $i < $qtd; $i ++){
        print($result . " ");
        $result += $raz;
    }
}

?>