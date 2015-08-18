import java.util.Scanner;

public class _2d {
  private static final int N = 6;

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int[][] map = new int[N][N];
    int max = -1000;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        map[i][j] = in.nextInt();
      }
    }

    for (int i = 0; i < N - 2; i++) {
      for (int j = 0; j < N - 2; j++) {
        int sum = 0;

        sum += map[i][j] + map[i][j + 1] + map[i][j + 2];
        sum += map[i + 1][j + 1];
        sum += map[i + 2][j] + map[i + 2][j + 1] + map[i + 2][j + 2];

        max = Math.max(max, sum);
      }
    }

    System.out.println(max);
  }
}
