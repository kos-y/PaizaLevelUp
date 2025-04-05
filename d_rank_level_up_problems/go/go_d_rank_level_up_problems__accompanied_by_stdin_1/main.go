package main
import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	sc := bufio.NewScanner(os.Stdin)
	var s, t string

	if sc.Scan() {
		s = sc.Text()
	}
	if sc.Scan() {
		t = sc.Text()
	}

	fmt.Println(s)
	fmt.Println(t)
}
