<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include_once("Connection.php");

$conn = Connection::getConnection();
$sql = "SELECT * FROM produtos";
$stm = $conn->prepare($sql);
$stm->execute();

$result = $stm->fetchAll();
?>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Listar Produtos</title>
</head>
<body style="font-family:arial">
    <br>
    <a href="inserir_produto.php">Inserir</a>
    <br><br>
    <table border="1" cellspacing=0 cellpadding=5>
        <tr>
            <th>ID</th>
            <th>Descrição</th>
            <th>Unidade de Medida</th>
            <th>Excluir</th>
        </tr>
        <?php foreach($result as $produto):?>
            <tr>
                <td><?= $produto['id']?></td>
                <td><?= $produto['descricao']?></td>
                <td><?= $produto['un_medida']?></td>
                <td><a href="excluir_produto.php?id=<?= $produto['id']?>" onclick="return confirm('Confrimar exclusão?')">Excluir</a></td>
            </tr>
        <?php endforeach?>
    </table>
</body>
</html>