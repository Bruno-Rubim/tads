<form method="POST" action="calculadora_form.php">
    <input type="number" name="valor1">
    <br><br>
    <select name="operacao">
        <option value="">--Operação---</option>
        <option value="+">+</option>
        <option value="-">-</option>
        <option value="x">x</option>
        <option value="/">/</option>
    </select>
    <br><br>
    <input type="number" name="valor2">
    <br><br>
    <button type="submit">Calcular</button>
</form>

<?php

$check1 = false;
$check2 = false;
$check3 = false;

if (isset($_POST['valor1'])){
    $valor1 = $_POST['valor1'];
    if ($valor1 != ''){
        $check1 = true;
    } else {
        print('valor 1 auxente <br>');
    }
}

if (isset($_POST['valor2'])){
    $valor2 = $_POST['valor2'];
    if ($valor2 != ''){
        $check2 = true;
    } else {
        print('valor 2 auxente <br>');
    }
}

if (isset($_POST['operacao'])){
    $operacao = $_POST['operacao'];
    if ($operacao != ''){
        $check3 = true;
    } else {
        print('operacao auxente <br>');
    }
}


if ($check1 && $check2 && $check3){
    switch($operacao){
        case "+":
            print($valor1 + $valor2);
        break;
        case "-":
            print($valor1 - $valor2);
        break;
        case "x":
            print($valor1 * $valor2);
        break;
        case "/":
            print($valor1 / $valor2);
        break;
    }
}

?>