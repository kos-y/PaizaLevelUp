import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Arrays.stream(sc.nextLine().split(" ")).forEach(s -> System.out.println(s));
    }
}
