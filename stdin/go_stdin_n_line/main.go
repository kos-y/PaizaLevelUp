package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	scanner.Scan()
	line_count, _ := strconv.Atoi(scanner.Text());

	var lines []string
	for i := 0; i < line_count; i++ {
		scanner.Scan()
		lines = append(lines, scanner.Text())
	}

	for _, line := range lines {
		fmt.Println(line)
	}
}
