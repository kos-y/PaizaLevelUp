import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        List<Integer> vs = new ArrayList<Integer>();
        for (int i = 0; i < 10; i++) {
            vs.add(sc.nextInt());
        }

        for (int v : vs) {
            System.out.printf("%d,", v);
        }
        System.out.println();
   }
}
