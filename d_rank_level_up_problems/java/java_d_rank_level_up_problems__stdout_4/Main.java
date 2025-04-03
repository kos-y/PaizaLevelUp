import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        int[] vs = {8, 1, 3};

        Arrays.stream(vs).forEach(v -> System.out.println(v));
    }
}
