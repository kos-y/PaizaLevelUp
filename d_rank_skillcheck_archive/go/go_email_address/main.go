package main
import "fmt"

func main() {
	var s, t string

	fmt.Scanln(&s)
	fmt.Scanln(&t)
	fmt.Printf("%s@%s", s, t)
}