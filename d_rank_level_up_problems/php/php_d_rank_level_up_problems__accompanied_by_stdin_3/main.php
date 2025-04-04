<?php
    list($a, $b, $c) = array_map('intval', explode(' ', fgets(STDIN)));
    $n = 0;
    $n += $a;
    $n *= $b;
    $n %= $c;
    echo $n;
?>