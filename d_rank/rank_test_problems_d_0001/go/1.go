// Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) Go編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
package main
import "fmt"

func main() {
	var s, a, t int

	fmt.Scan(&s, &a, &t)
	sa := (float32)(s * a)
	ta := (float32)(t * a)
	fmt.Println((int)((ta / sa) * 100.0))
}
