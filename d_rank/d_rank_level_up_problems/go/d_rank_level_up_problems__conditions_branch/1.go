package main
import "fmt"

func main() {
	var s string

	fmt.Scanln(&s)

	if s == "paiza" {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
