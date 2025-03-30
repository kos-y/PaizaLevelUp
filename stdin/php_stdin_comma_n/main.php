<?php
    fgets(STDIN);
    $line = fgets(STDIN);
    $words = explode(",", $line);
    foreach ($words as $word) {
        echo $word . PHP_EOL;
    }
?>
