import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        String n = sc.nextLine();
        StringBuilder sb = new StringBuilder(n);
        for (int i = sb.length() - 3; i > 0; i -= 3) {
            sb.insert(i, ",");
        }

        System.out.println(sb.toString());
   }
}
