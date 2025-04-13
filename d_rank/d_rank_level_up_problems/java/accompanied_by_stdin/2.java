import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String[] vs = sc.nextLine().split(" ");
        int a = Integer.parseInt(vs[0]);
        int b = Integer.parseInt(vs[1]);

        System.out.printf("%d %d%n", a - b, a * b);
    }
}
