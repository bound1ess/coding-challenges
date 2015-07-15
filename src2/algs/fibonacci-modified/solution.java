import java.util.Scanner;
import java.math.BigInteger;

public class solution {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    BigInteger a = scan.nextBigInteger(), b = scan.nextBigInteger();
    int n = scan.nextInt();

    for (int i = 0; i < n - 2; ++i) {
      BigInteger tmp = b;
      b = b.pow(2).add(a);
      a = tmp;
    }

    System.out.println(b);
  }
}
