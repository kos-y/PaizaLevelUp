import java.util.*;

class NM
{
    double n;
    int m;

    public NM(double n, int m)
    {
        this.n = n;
        this.m = m;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();

        List<NM> nms = new ArrayList();
        for (int i = 0; i < q; i++) {
            double n = sc.nextDouble();
            int m = sc.nextInt();

            nms.add(new NM(n, m));
        }

        for (NM nm : nms) {
            String s = "%." + nm.m + "f\n";
            System.out.printf(s, nm.n);
        }
    }
}
