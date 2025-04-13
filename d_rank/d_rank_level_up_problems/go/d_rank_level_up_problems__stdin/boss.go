package main
import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	sc := bufio.NewScanner(os.Stdin)

	if sc.Scan() {
		ss := strings.Split(sc.Text(), " ")
		for _, s := range ss {
			fmt.Println(s)
		}
	}
}
