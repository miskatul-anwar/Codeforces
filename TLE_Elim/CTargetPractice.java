import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class CTargetPractice {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    for (int i = 1; i <= t; i++) {
      List l = new ArrayList<Character>();
      for (int j = 0; j < 100; j++) {
        Character ch = (char) sc.nextInt();
      }
      for (Object object : l) {
        System.out.println(object);
      }
    }
  }

}
