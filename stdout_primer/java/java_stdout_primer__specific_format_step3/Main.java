import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        final int SIZE = 9;
        final int EQUAL = 2;

        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j <= SIZE; j++) {
                System.out.printf("%2d", i * j);
                if (j < SIZE) {
                    System.out.print(" | ");
                }
            }

            System.out.println();
            if (i < SIZE) {
                System.out.println("=".repeat(EQUAL));
            }
        }
    }
}
