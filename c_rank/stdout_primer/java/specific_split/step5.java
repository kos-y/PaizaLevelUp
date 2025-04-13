import java.util.*;
import java.util.stream.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        List<Integer> vs = new ArrayList<Integer>();
        for (int i = 0; i < 10; i++) {
            vs.add(sc.nextInt());
        }

        System.out.println(
            vs.stream()
              .map(String::valueOf)
              .collect(Collectors.joining(" | "))
        );
   }
}
