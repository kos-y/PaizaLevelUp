import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        int m = sc.nextInt();

        String s = "%." + m + "f\n";
        System.out.printf(s, n);
    }
}
