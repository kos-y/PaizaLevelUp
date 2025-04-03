import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String[] vs = sc.nextLine().split(" ");
        int a = Integer.parseInt(vs[0]);
        int b = Integer.parseInt(vs[1]);
        int c = Integer.parseInt(vs[2]);

        int n = 0;
        n += a;
        n *= b;
        n %= c;
        System.out.println(n);
    }
}
