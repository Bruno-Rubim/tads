<?php
    $listas = array();

    $flores = array("Orquídea", "Margarida", "Petúnia");
    $frutas = array("Laranja", "Maçã", "Limão");
    $cidades = array("Foz do Iguaçu", "Cascavel", "Toledo");
    $lugares = array("Itaipu", "Cataratas", "Parque das Aves");

    $listas = array($flores, $frutas, $cidades, $lugares);
    
    print "<table border=1>";
    foreach($listas as $lista){
        print "<tr>";
        foreach($lista as $dado){
            print "<td>" . $dado . "</td>";
        }
        print "</tr>";
    }
    print "</table>";
?>