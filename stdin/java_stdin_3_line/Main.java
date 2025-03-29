import java.util.Scanner;
import java.util.stream.IntStream;

public class Main
{
    public static void main(String[] args)
    {
        final int lineCount = 3;
        Scanner scanner = new Scanner(System.in);

        IntStream.range(0, lineCount)
                 .mapToObj(i -> scanner.nextLine())
                 .forEach(System.out::println); 
    }
}