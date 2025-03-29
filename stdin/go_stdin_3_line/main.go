package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	const LINE_COUNT = 3

	scanner := bufio.NewScanner(os.Stdin)
	var lines []string

	for i := 0; i < LINE_COUNT; i++ {
		scanner.Scan()
		lines = append(lines, scanner.Text())
	}
	
	for _, line := range lines {
		fmt.Println(line)
	}
}
