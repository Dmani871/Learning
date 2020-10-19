//Only displays hello to you using your name if you are named Alice


import java.util.Scanner;

public class HelloAlice{
    public static void main (String[] args){
        //create scanner object to read input
        Scanner keys=new Scanner(System.in);
        String name_input;
        //Ask for the users name
        System.out.print("Please enter your name ");
        name_input =keys.nextLine();
        String name="Alice";
        // checks to see if the two string objects both hold Alice
        if (name.equals(name_input)){
            System.out.println("Hello World Alice");
        }else{
            // forgets the name as it not equal to Alice
            System.out.println("Hello World ... oops I forgot your name");
        }
        
    }
}