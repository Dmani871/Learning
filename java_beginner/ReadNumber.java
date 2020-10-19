//Reads and displays number
import java.util.Scanner;

public class ReadNumber {
    public static void main(String[] args) {
        Scanner keys = new Scanner(System.in);
        long x;

        System.out.print("Enter a number: ");
        x = keys.nextLong();
        System.out.println("The number is " + x);
    }
}