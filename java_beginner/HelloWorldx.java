//Displays Hello to x

import java.util.Scanner;
public class HelloWorldx{
    public static void main(String[] args){
        // create scanner object 
        Scanner keys=new Scanner(System.in);
        String name;
        //Ask for the name of person and stores in string
        System.out.print("Please enter your name ");
        name=keys.nextLine();
        //Displays Hello using the name entered
        System.out.println("Hello World "+name);
    }
}