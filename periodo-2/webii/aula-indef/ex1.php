<?php
    $values = array(1, 14, 1934, 25, 8887, -33, 904, 2, 73915, 314159265);
    $sum = 0;
    foreach($values as $n){
        $sum += $n;
    }
    print $sum / count($values);
?>