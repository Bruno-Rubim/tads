<?php
    $carros = array();
    $carro1 = array(
        "link" => "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTZFtSQKREhEMBtKBY7oct1aDRXV5lksqTvbemgK1C-fA1Ou6uP6hUlKwmvkJ-8M2Su28s&usqp=CAU",
        "modelo" => "Thanos Car",
        "marca" => "Disney"
    );
    $carro2 = array(
        "link" => "https://i.pinimg.com/474x/61/35/88/6135880941037094303179a23c1442d5.jpg",
        "modelo" => "Fuxquinha",
        "marca" => "Volkswagen"
    );
    $carro3 = array(
        "link" => "https://i.ebayimg.com/images/g/pgYAAOSwQz1jyVhD/s-l1200.webp",
        "modelo" => "Carro chapa",
        "marca" => "Fabrica de chapas™"
    );
    $carro4 = array(
        "link" => "https://hypescience.com/wp-content/uploads/2011/07/714-e1311957680739.jpg",
        "modelo" => "1961 Turboflite",
        "marca" => "Chrysler"
    );
    $carro5 = array(
        "link" => "https://svi.nl/dl3429",
        "modelo" => "W h eat i",
        "marca" => "sssvengonion"
    );
    
    $carros = array($carro4, $carro2, $carro1, $carro3, $carro5);

    foreach($carros as $carro){
        print('<div style="width: 200px; border: 1px solid;" >');
        print($carro["modelo"] . '<br>');
        print($carro["marca"] . '<br>');
        print('<img style="width: 200px" src="' . $carro["link"] . '">');
        print('</div> <br>');
    }
?>