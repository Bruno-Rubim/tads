<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include_once("Connection.php");

$id = 0;

if (isset($_GET['id'])){
    $id = $_GET['id'];
} else {
    print("Id invalido");
    print("<a href='time_listar.php'>Voltar</a>");
    exit;
}

$conn = Connection::getConnection();
$sql = "DELETE FROM times WHERE id = ?";
$stm = $conn->prepare($sql);
$stm->execute([$id]);
header("location: time_listar.php");
?>