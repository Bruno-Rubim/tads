<?php

    $linhas = array(
        "linha0" => array("Nome", "Endereço", "Cidade", "UF"),
        "linha1" => array("Manuel de Medeiros", "Rua das Acácias", "Foz do Iguaçu", "PR"),
        "linha2" => array("Juliana de Amaral", "Rua dos Pinheiros", "Florianópolis", "SC"),
        "linha3" => array("Rodrigo Baidek", "Rua Dom Pedro I", "Petrópolis", "RJ"),
        "linha4" => array("Fabíola da Silva", "Rua Chile", "Guarulhos", "SP")
    );

    print "<table border=1>";
    foreach($linhas as $linha){
        print "<tr>";
        foreach($linha as $dado){
            print "<td>" . $dado . "</td>";
        }
        print "</tr>";
    }
    print "</table>";
?>