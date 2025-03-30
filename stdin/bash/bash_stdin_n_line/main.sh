# 行数の入力
read line_count

# 入力された行数分、文字列を入力
for i in $(seq 1 $line_count) ; do
    read lines[i]
done

# 改行ごとに分割されるように設定
IFS='\n'

# 入力された行ごとに出力
for line in ${lines[@]} ; do
    echo $line
done
