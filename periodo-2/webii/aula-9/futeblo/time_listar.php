<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include_once("Connection.php");

$conn = Connection::getConnection();
$sql = "SELECT * FROM times";
$stm = $conn->prepare($sql);
$stm->execute();

$result = $stm->fetchAll();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nome</th>
            <th>Cidade</th>
        </tr>
        <?php foreach($result as $time):?>
            <tr>
                <td><?= $time['id']?></td>
                <td><?= $time['nome']?></td>
                <td><?= $time['cidade']?></td>
                <td><a href="time_excluir.php?id=<?= $time['id']?>" onclick="return confirm('Confrimar exclusão?')">Excluir</a></td>
            </tr>
        <?php endforeach?>
    </table>
</body>
</html>