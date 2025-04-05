package main
import "fmt"

func main() {
	var a, b, c int

	fmt.Scan(&a, &b, &c)

	var n int = 0
	n += a
	n *= b
	n %= c
	fmt.Println(n)
}
