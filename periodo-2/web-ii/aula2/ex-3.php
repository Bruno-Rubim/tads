<?php
$n = 1980;
while ($n < 2024) {
    if($n % 4 == 0 && ($n % 400 == 0 || $n % 4 !== 100)){
        print $n . " é bissexto <br>";
    }
    $n++;
}
?>