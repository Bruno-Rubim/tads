<?php

function fatorial($x){
    $sum = 1;
    for($i = 1; $i<=$x; $i++){
        $sum *= $i;
    }
    return $sum;
}

for ($i = 5; $i < 13; $i++){
    print("fatorial de " . $i . " = " . fatorial($i) . "<br>");
}
?>