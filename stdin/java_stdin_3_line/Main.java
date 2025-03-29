import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String[] lines = new String[3];
        
        for (int i = 0; i < lines.length; i++) {
            lines[i] = sc.nextLine();
        }

        for (String line : lines) {
            System.out.println(line);
        }
    }
}
