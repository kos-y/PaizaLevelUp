import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        int[] vs = {813, 1, 2, 923874, 23648, 782356, 3256, 2342, 24324, 112};

        Arrays.stream(vs).forEach(v -> System.out.println(v));
    }
}
