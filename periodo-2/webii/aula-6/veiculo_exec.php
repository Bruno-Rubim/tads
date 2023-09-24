<?php
//veiculo_exec.php
$modelo = $_POST["modelo"];
$marca = $_POST["marca"];
$combust = $_POST["combustivel"];

switch($combust){
    case "A":
        $combust = "Álcool";
        break;
    case "G":
        $combust = "Gasolina";
        break;
    case "F":
        $combust = "Flex";
        break;
}

print("<h1>Dados informados para o veículo</h1>");
print("Modelo: " . $modelo . "<br>");
print("Marca: " . $marca . "<br>");
print("Combustível: " . $combust . "<br>");
print("<br><br>");
print("<a href='veiculo_form.php'>Cadastrar outro veículo</a>");

?>