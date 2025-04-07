import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        loop(1, n / 2);
        loop((n / 2) + 1, n);
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
