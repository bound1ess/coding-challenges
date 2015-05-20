import java.util.Scanner;
import java.util.ArrayList;

public class Stack {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        ArrayList<Character> opening = new ArrayList<Character>(),
            closing = new ArrayList<Character>();

        opening.add('(');
        opening.add('{');
        opening.add('[');

        closing.add(')');
        closing.add('}');
        closing.add(']');

        while (in.hasNextLine()) {
            java.util.Stack<Character> stack = new java.util.Stack<Character>();
            String line = in.nextLine();

            boolean postCheck = true;

            for (int i = 0; i < line.length(); i++) {
                if (opening.indexOf(line.charAt(i)) > -1) {
                    stack.push(line.charAt(i));
                } else {
                    if (stack.empty()
                        || opening.indexOf(stack.peek()) != closing.indexOf(line.charAt(i))) {
                        System.out.println("false");
                        postCheck = false;

                        break;
                    }

                    stack.pop();
                }
            }

            if (postCheck) {
                System.out.println(stack.empty() ? "true" : "false");
            }
        }
    }
}
