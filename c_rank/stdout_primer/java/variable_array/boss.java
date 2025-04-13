import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        List<Integer> as = new ArrayList();
        List<Integer> bs = new ArrayList();
        for (int i = 0; i < n; i++) {
            as.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            bs.add(sc.nextInt());
        }

        int l = 0;
        for (int i = 0, j = 0; i < n; i++) {
            System.out.print(as.get(i));
            if (++j < bs.get(l)) {
                System.out.print(" ");
            }
            else {
                System.out.println();
                j = 0;
                l++;
            }
        }
    }
}
