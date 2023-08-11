<?php
    $x = 5;
    $y = 4;

    function power($x, $y){
        $result = 1;
        for($i = 0; $i < $y; $i++){
            $result *= $x;
        }
        return $result;
    }

    function multply($x, $y){
        return $x * $y;
    }

    function inverse($x){
        return 1 / $x;
    }

    function diference($x, $y){
        return $x - $y;
    }

    print "5^4 = " . power($x, $y) . "<br>";
    print "5x4 = " . multply($x, $y) . "<br>";
    print "inverso de 5 = " . inverse($x) . "<br>";
    print "4 + (5/2) = " . $y + multply(0.5, $x) . "<br>";
    print "5 - 4 = " . diference($x, $y) . "<br>";
    print "oposto de 4 = " . multply(-1, $y) . "<br>";

?>