// count the multiples for a given n and find the sum 
import java.util.Scanner;

public class CountMultiples{
    public static void main(String[] args){
        Scanner keys=new Scanner(System.in);
        int x=1;
        int n=1;
        int sum=0;
        System.out.print("What number do you want to count to ");
        n=keys.nextInt();

        while (x<=n){
            if (n%x==0){
                System.out.println(x);
                sum+=x;
            }
            x+=1;
        }
        System.out.println("The sum is :"+sum);

    }
}