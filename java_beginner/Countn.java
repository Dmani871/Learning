// Finds the sum of all values upto and including n

import java.util.Scanner;

public class Countn{
    public static void main (String[] args){
        Scanner keys=new Scanner(System.in);
        System.out.print("Please enter a number to count up to ");
        //takes the next integer entered as n
        int n=keys.nextInt();
        int x=1;
        int sum =0;
        while (x<=n){
            System.out.println(x);
            sum+=x;
            x+=1;
        }
        System.out.println("The sum is "+sum);
    }
}