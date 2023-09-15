<?php

$login = '';
$logado = false;

if (isset($_GET['login'])){
    $login = $_GET['login'];
}

$senha = '';
if (isset($_GET['senha'])){
    $senha = $_GET['senha'];
}

if ($login == 'tads' && $senha == 'tads'){
    $logado = true;
}

if ($logado){

}

?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="POST" action="desafio_form.php">
            <input name="login" placeholder="Informe o login">
            <br><br>
            <input name="senha" placeholder="senha">
            <br><br>
            <button type="submit">Enviar</button>
        </form>
    </body>
</html>


<!--
Desafio: crie um formulário que receba o login e a senha de um
usuário. Se o login informado for “ifpr” e a senha “tads”, exiba uma
mensagem na tela de “Bem vindo ao TADS!” e esconda o
formulário. Dica: a action do formulário deve chamar a mesma
página.