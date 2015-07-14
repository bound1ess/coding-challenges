import java.util.Scanner;

public class solution {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    long sum = 0L;
    int n = scan.nextInt();

    for (int i = 0; i < n; ++i) {
      sum += scan.nextLong();
    }

    System.out.println(sum);
  }
}
