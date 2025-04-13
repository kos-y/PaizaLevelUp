import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                System.out.printf("(%d, %d)", a, b);
                if (j < w) {
                    System.out.print(" | ");
                }
            }
            System.out.println();

            if (i < h) {
                System.out.println("=".repeat((w * 9) - 3));
            }
        }
    }
}
