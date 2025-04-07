import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        List<Integer> ms = new ArrayList();

        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            ms.add(sc.nextInt());
        }

        for(int m : ms) {
            loop(1, m);
        }
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
