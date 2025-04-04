<?php
    list($a, $b) = array_map('intval', explode(' ', fgets(STDIN)));
    printf('%d %d%s', $a - $b, $a * $b, PHP_EOL);
?>