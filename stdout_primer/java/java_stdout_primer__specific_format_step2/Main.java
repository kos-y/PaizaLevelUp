import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.printf("(%d, %d)", a, b);
            if (i < n - 1) {
                System.out.print(", ");
            }
        }
        System.out.println();
    }
}
