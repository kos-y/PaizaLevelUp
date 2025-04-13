import java.util.Scanner;
import java.util.stream.IntStream;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int lineCount = scanner.nextInt();
        scanner.nextLine();

        IntStream.range(0, lineCount)
                 .mapToObj(i -> scanner.nextLine())
                 .forEach(System.out::println); 
    }
}