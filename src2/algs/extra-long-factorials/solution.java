import java.util.Scanner;
import java.math.BigInteger;

public class solution {

  public static void main(String[] args) {
    int n = new Scanner(System.in).nextInt();
    System.out.println(fac(n));
  }

  private static BigInteger fac(int n) {
    if (n < 2) {
      return BigInteger.ONE;
    } else {
      return BigInteger.valueOf(n).multiply(fac(n - 1));
    }
  }
}
