package main
import "fmt"

func main() {
	var a, b string

	fmt.Scanln(&a)
	fmt.Scanln(&b)
	if a == b {
		fmt.Println("OK")
	} else {
		fmt.Println("NG")
	}
}
