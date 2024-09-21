import java.util.Scanner;

public class powerof2 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long n = sc.nextInt();
    sc.close();
    if (n != 0 && (n & (n - 1)) == 0) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
    return;
  }
}
