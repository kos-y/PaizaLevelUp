read line_count
for i in $(seq 1 $line_count) ; do
    read lines[i]
done

IFS='\n'
for line in ${lines[@]} ; do
    echo $line
done
