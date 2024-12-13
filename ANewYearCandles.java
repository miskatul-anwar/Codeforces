import java.util.Scanner;

public class ANewYearCandles {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        int ans = 0;
        int leftovers = 0;
        while (a > 0) {
            ans += a;
            int newCandles = (a + leftovers) / b;
            leftovers += (a + leftovers) % b;
            a = newCandles;
        }
        System.out.println(ans);
    }
}