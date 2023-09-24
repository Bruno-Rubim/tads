<?php
?>


<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
</head>
<body style="font-family:arial">
    <br>
    <a href="listar_produtos.php">Lista de produtos</a>
    <br>
    <h3>Inserir Produto</h3>
    <form action="" method="GET">
        <input type="text" name="descricao" placeholder="Descrição" value="<?= $descricao?>">
        
        <br><br>
        
        <select name="un_medida">
            <option value="" >--Unidade de medida--</option>
            <option value="Unidade">Unidade</option>
            <option value="Quilogramas">Quilogramas</option>
            <option value="Litros">Litros</option>
            <option value="Duzia">Duzia</option>
            <option value="Outro">Outro</option>
        </select>
        
        <br><br>
        
        <input type="hidden" name="submetido" value="1">
        <button type="submit">Enviar</button>
        <button type="reset">Limpar Respostas</button>
    </form>
    <br>
</body>
</html>
<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include_once("Connection.php");

if(!isset($_GET['descricao']) || !isset($_GET['un_medida']) || !($_GET['descricao']) || !($_GET['un_medida'])) {
    print("Informe os parâmetros 'descricao' e 'un_medida'!");
    exit;
}

$descricao = $_GET['descricao'];
$un_medida = $_GET['un_medida'];

$conn = Connection::getConnection();
$sql = "INSERT INTO produtos (descricao, un_medida) VALUES (?, ?)";
$stm = $conn->prepare($sql);
$stm->execute([$descricao, $un_medida]);

print("Produto Inserido no bd!");
?>