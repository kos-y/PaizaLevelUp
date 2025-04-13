package main
import (
	"fmt"
	"math"
)

func main() {
	min := math.MaxInt32

	for i := 0; i < 5; i++ {
		var n int

		fmt.Scan(&n);
		if n < min {
			min = n
		}
	}

	fmt.Println(min)
}
