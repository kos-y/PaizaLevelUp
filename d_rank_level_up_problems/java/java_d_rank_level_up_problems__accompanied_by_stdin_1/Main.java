import java.util.*;
import java.util.stream.IntStream;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        IntStream.range(0, 2).mapToObj(i -> sc.nextLine()).forEach(System.out::println);
    }
}
