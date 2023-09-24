<?php

if (isset($_POST['submetido'])){
    $nome = $_POST['nome'];
    $idade = $_POST['idade'];
    if(!$nome){
        $msgErro = 'Informe o nome';
    } else if(!$idade){
        $msgErro = 'Informe a idade';
    } else {
        print($nome . " " . $idade);
        $nome = "";
        $idade = "";
    }
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Validacao</title>
</head>
<body>
    <h1>Formulario</h1>

    <form method="POST">
        <input type="text" placeholder="Nome" name="nome" id="nome" value="<?= $nome ?>">
        <br><br>
        <input type="number" placeholder="Idade" name="idade" id="idade" value="<?= $idade ?>">
        <br><br>
        <button type="submit">Enviar</button>
        <input type="hidden" name="submetido" value="1">
    </form>
    <div id="msg"> <?php print($msgErro)?></div>
    <script src="validacao.js"></script>
</body>
</html>