// count the upto n where x is a multiple of 3 or 5
import java.util.Scanner;

public class CountMultiplesTF{
    public static void main(String [] args){
        Scanner keys=new Scanner(System.in);
        int x,y,sum;
        System.out.print("Please enter a number");
        y=0;
        sum=0;
        x=keys.nextInt();
        while(y<x){
            y +=1;
            if (y%3==0 || y%5==0){
                sum +=x;
                System.out.println(y);
        }
        }
    }
}