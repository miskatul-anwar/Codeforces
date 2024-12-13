import java.util.Scanner;

public class BstringLCM {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int q = scanner.nextInt();
    scanner.nextLine(); // consume the newline character

    for (int i = 0; i < q; i++) {
      String s = scanner.nextLine();
      String t = scanner.nextLine();
      String lcm = findLCM(s, t);
      System.out.println(lcm);
    }
    scanner.close();
  }

  private static String findLCM(String s, String t) {
    String longer = s.length() > t.length() ? s : t;
    String shorter = s.length() > t.length() ? t : s;

    // Calculate LCM length
    int lcmLength = lcm(s.length(), t.length());

    // Repeat the strings to match LCM length
    String repeatedS = repeatString(s, lcmLength / s.length());
    String repeatedT = repeatString(t, lcmLength / t.length());

    if (repeatedS.equals(repeatedT)) {
      return repeatedS;
    } else {
      return "-1";
    }
  }

  private static int lcm(int a, int b) {
    return a * (b / gcd(a, b));
  }

  private static int gcd(int a, int b) {
    if (b == 0) {
      return a;
    }
    return gcd(b, a % b);
  }

  private static String repeatString(String str, int times) {
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < times; i++) {
      sb.append(str);
    }
    return sb.toString();
  }
}
