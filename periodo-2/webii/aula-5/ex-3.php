<?php

$numeros = range(0, 100);

$numIni = 0;
$numFin = 100;

if (isset($_GET['numIni'])){
    $numIni = $_GET['numIni'];
}

if (isset($_GET['numFin'])){
    $numFin = $_GET['numFin'];
}

for($i = $numIni; $i <= $numFin; $i++){
    print($numeros[$i] . "<br>");
}
?>