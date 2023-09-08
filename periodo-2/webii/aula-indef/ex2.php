<?php
    $frase = array("Ola", "Josefinho", "seu", "maluco", "doidão");
    $vazio = array();
    foreach($frase as $palavra){
        array_push($vazio,$palavra);
    }
    foreach($vazio as $palavra){
        print $palavra . ", ";
    }
?>