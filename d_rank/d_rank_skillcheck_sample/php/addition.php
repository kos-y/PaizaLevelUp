<?php
    list($a, $b) = array_map('intval', explode(' ', trim(fgets(STDIN))));
    echo $a + $b;
?>