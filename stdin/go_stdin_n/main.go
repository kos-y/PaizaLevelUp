package main

import(
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin);
	scanner.Scan()
	scanner.Scan()

	words := strings.Split(scanner.Text(), " ")
	for _, word := range words {
		fmt.Println(word);
	}
}
