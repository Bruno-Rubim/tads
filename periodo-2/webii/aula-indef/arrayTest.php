<?php
    $alunos = array("A",
                    "B",
                    "C",
                    "posicao" => "D",
                    900 => "E",
                    "F",
                    4 => "G",
                    2 => "H");
    foreach($alunos as $endr => $nome){
        print $endr . " contem " . $nome . "<br>";
    }
    print_r($alunos);
?>