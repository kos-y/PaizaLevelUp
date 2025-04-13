import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        List<Integer> ns = new ArrayList<Integer>();
        for (int i = 0; i < 9; i++) {
            ns.add(sc.nextInt());
        }

        for (int i = 0; i < 9; i++) {
            System.out.print(ns.get(i));
            if (i % 3 != 2) {
                System.out.print(" ");
            }
            else {
                System.out.println();
            }
        }
    }
}
