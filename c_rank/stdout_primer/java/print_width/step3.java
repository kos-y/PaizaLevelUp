import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        List<Integer> ms = new ArrayList();
        for (int i = 0; i < n; i++) {
            ms.add(sc.nextInt());
        }

        for (int m : ms) {
            System.out.printf("%3d\n", m);
        }
    }
}
