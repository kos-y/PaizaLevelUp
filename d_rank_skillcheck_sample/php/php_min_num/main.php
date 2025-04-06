<?php
    $min = PHP_INT_MAX;
    foreach (array_fill(0, 5, null) as $_) {
        $n = intval(fgets(STDIN));
        if ($n < $min) {
            $min = $n;
        }
    }
    echo $min;
?>