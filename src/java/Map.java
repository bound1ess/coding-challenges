public class Map {

    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        java.util.Map<String, String> map = new java.util.HashMap<String, String>();

        int n = in.nextInt();
        in.nextLine(); // workaround

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
