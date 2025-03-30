# LF区切りでテキストが分割されるように設定
IFS='\n'

# 標準入力
lines=$(</dev/stdin)

# 行ごとに出力
echo $lines
