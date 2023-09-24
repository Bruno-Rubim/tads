<?php

    $profs = array("Daniel", "Juliana", "Felipe", "Julio", "Daniel");
    $times = array("Daniel", "Daniel", "Daniel", "Daniel", "Daniel");
    $frutas = array("Daniel", "Daniel", "Daniel", "Daniel", "Daniel");
    $animais = array("Daniel", "Daniel", "Daniel", "Daniel", "Daniel");

    print "<table border=1>";
        print "<tr>";
        foreach($profs as $p){
            print "<td>" . $p . "</td>";
        }
        print "</tr>";
        print "<tr>";
        foreach($times as $t){
            print "<td>" . $t . "</td>";
        }
        print "</tr>";
        print "<tr>";
        foreach($frutas as $f){
            print "<td>" . $f . "</td>";
        }
        print "</tr>";
        print "<tr>";
        foreach($animais as $a){
            print "<td>" . $a . "</td>";
        }
        print "</tr>";
    print "</table>";

?>