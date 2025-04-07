import java.util.*;
import java.util.stream.*;

public class Main
{
    public static void main(String[] args)
    {
        List<Integer> vs = new ArrayList<Integer>();

        for (int i = 1; i <= 10; i++) {
            vs.add(i);
        }

        System.out.println(
            vs.stream()
              .map(String::valueOf)
              .collect(Collectors.joining(" "))
        );
   }
}
