import java.util.Scanner;
import java.util.HashMap;

public class Map {

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    java.util.Map<String, String> map = new HashMap<String, String>();
    int n = Integer.parseInt(in.nextLine());

    for (int i = 0; i < n; i++) {
      map.put(in.nextLine(), in.nextLine());
    }

    while (in.hasNextLine()) {
      String query = in.nextLine();

      if (map.containsKey(query)) {
        System.out.println(query + "=" + map.get(query));
      } else {
        System.out.println("Not found");
      }
    }

    in.close();
  }
}
