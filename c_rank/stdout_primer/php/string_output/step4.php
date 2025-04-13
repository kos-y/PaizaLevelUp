<?php
    $s = [];

    for ($i = 1; $i <= 10; $i++) {
        $s[] = trim(fgets(STDIN));
    }

    echo implode(" ", $s) . PHP_EOL;
?>