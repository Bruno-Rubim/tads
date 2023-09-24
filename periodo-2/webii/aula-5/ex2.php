<?php 
//2- Implemente um programa em PHP que receba 3 números e imprima a média aritmética deles.
//Codifique dois programas, recendo os parâmetros por:
//Método GET
//Método POST
$a = $_GET['num1'];
$b = $_GET['num2'];
$c = $_GET['num3'];

$x = $_POST['var1'];
$y = $_POST['var2'];
$z = $_POST['var3'];

print(($x + $y + $z) / 3 . " ");
print(($a + $b + $c) / 3);

?>