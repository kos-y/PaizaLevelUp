import java.util.*;
import java.util.stream.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        List<String> ss = new ArrayList<String>();
        for (int i = 1; i <= 10; i++) {
            ss.add(sc.nextLine());
        }

        System.out.println(
            ss.stream()
              .collect(Collectors.joining(" "))
        );
   }
}
