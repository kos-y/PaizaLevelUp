import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        List<Integer> as = new ArrayList();
        for (int i = 0; i < n; i++) {
            as.add(sc.nextInt());
        }

        String s = "%" + m + "d\n";
        for (int a : as) {
            System.out.printf(s, a);
        }
    }
}
