import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        loop(1, n);
        loop(1, m);
    }

    private static void loop(int s, int e)
    {
        for (int i = s; i <= e; i++) {
            System.out.print(i);
            if (i < e) {
                System.out.print(" ");
            }
        }

        System.out.println();
    }
}
