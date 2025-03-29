<?php
    $lineCount = (int)fgets(STDIN);

    $lines = [];
    for ($i = 0; $i < $lineCount; $i++) {
        $lines[] = fgets(STDIN);
    }

    foreach ($lines as $line) {
        echo $line;
    }
?>
