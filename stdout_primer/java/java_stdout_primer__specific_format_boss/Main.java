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
            StringBuilder sb = new StringBuilder();
            for (int j = 1; j <= w; j++) {
                sb.append(String.format("(%9d, %9d)", a, b));
                if (j < w) {
                    sb.append(" | ");
                }
            }
            System.out.println(sb);

            if (i < h) {
                System.out.println("=".repeat(sb.length()));
            }
        }
    }
}
