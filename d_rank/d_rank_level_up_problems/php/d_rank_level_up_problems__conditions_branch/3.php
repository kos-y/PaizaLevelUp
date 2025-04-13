<?php
    list($a, $b, $c) = array_map('intval', explode(' ', fgets(STDIN)));
    echo $a * $b <= $c ? 'YES' : 'NO';
?>