import java.util.Scanner;

/*
TestStack Class
December 10, 2017
Demonstration of the Stack ADT in Java.
*/
public final class TestStack {
    
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack();
        Scanner scanner = new Scanner(System.in);
        
        // Ask for user input until end condition is met.
        for(;;) {
            System.out.println("Please enter a non-negative number to convert to binary: ");
            int input = scanner.nextInt();
            
            // If negative is entered, break loop.
            if(input < 0) break;
            
            // Use Stack<T> for binary conversion.
            do {
                stack.push(input % 2);
                input /= 2;
            } while(input != 0);
            
            // Pop elements of Stack<T> to print conversion.
            while(stack.top() != null)
                System.out.print(stack.pop());
            
            // Prepare new lines for next input.
            System.out.println("\n");
        }
    }
}
