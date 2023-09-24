<?php

class Estado{
    private $nome;
    private $sigla;
    

    public function getNome()
    {
        return $this->nome;
    }
    public function setNome($nome)
    {
        $this->nome = $nome;
        return $this;
    }

    public function getSigla()
    {
        return $this->sigla;
    }
    public function setSigla($sigla)
    {
        $this->sigla = $sigla;
        return $this;
    }

}

class Cidade{
    private $nome;
    private $qtdHabitantes;
    private $areaTerritorial;
    private $altitude;
    private $estado;
    
    public function __construct($no, $qt, $ar, $al, $es){
        $this->nome = $no;
        $this->qtdHabitantes = $qt; 
        $this->areaTerritorial = $ar; 
        $this->altitude = $al; 
        $this->estado = $es;
    }

    public function getNome()
    {
        return $this->nome;
    }
    public function setNome($nome)
    {
        $this->nome = $nome;
    }

    public function getQtdHabitantes()
    {
        return $this->qtdHabitantes;
    }
    public function setQtdHabitantes($qtdHabitantes)
    {
        $this->qtdHabitantes = $qtdHabitantes;
    }

    public function getAreaTerritorial()
    {
        return $this->areaTerritorial;
    }
    public function setAreaTerritorial($areaTerritorial)
    {
        $this->areaTerritorial = $areaTerritorial;
    }

    public function getAltitude()
    {
        return $this->altitude;
    }
    public function setAltitude($altitude)
    {
        $this->altitude = $altitude;
    }

    public function getEstado()
    {
        return $this->estado;
    }
    public function setEstado($estado)
    {
        $this->estado = $estado;
    }
}

$sc = new Estado();
$sc->setNome("Santa Catarina")->setSigla("SC");

$pr = new Estado();
$pr->setNome("Paraná")->setSigla("PR");

$foz = new Cidade("Foz do Iguaçu", 200.000, "sla", "alto", $pr); 
$cascavel = new Cidade("Cascavel", 20, "sla", "alto", $pr);
$santacatarina = new Cidade("Santa Catarina", 0, "sla", "alto", $sc);

$cidades = array($foz, $cascavel, $santacatarina);

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
            <th>Nome</th>
            <th>Habitantes</th>
            <th>Área</th>
            <th>Altitude</th>
            <th>Estado</th>
        </tr>
        <?php foreach($cidades as $cidade):?>
            <tr>
                <td><?= $cidade->getNome(); ?></td>
                <td><?= $cidade->getQtdHabitantes(); ?></td>
                <td><?= $cidade->getAreaTerritorial(); ?></td>
                <td><?= $cidade->getAltitude(); ?></td>
                <td><?= $cidade->getEstado()->getNome() . ' - ' . $cidade->getEstado()->getSigla(); ?></td>
            </tr>
        <?php endforeach;?>
    </table>
    
</body>
</html>