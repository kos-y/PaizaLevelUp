package main
import "fmt"

func main() {
	const (
		A = 202
		B = 134
		C = 107
	)

	var a = (A + B) * C
	fmt.Println(a * a)
}
