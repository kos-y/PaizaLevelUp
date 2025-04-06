import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.IntStream;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        AtomicInteger min = new AtomicInteger(Integer.MAX_VALUE);
        IntStream.range(0, 5).forEach(_i -> {
            int n = sc.nextInt();
            if (n < min.get()) {
                min.set(n);
            }
        });
        System.out.println(min.get());
    }
}
