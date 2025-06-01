// Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) Java編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String[] vs = sc.nextLine().split(" ");
        int s = Integer.parseInt(vs[0]);
        int a = Integer.parseInt(vs[1]);
        int t = Integer.parseInt(vs[2]);

        double sa = s * a;
        double ta = t * a;
        System.out.println((int)((ta / sa) * 100.0));    
    }
}