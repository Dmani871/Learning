//Basic Interactive Fiction where the user has to defeat the dragon to enter the castle
import java.util.Scanner;
public class IF{
    public static void main (String[] args){
        Scanner keys=new Scanner(System.in);
        boolean dragon_slayed =false;
        int choice;
        // stores the intial power of the dragon
        int dragon_defeated = 100;
        System.out.println("You are outside Dragon Castle and the dragon is blocking your path? What do you do?");
        while (!dragon_slayed){
            // Provides the users with methods of attacking the dragon
            System.out.println("1.Attack dragon with sword");
            System.out.println("2.Attack dragon with fireball");
            //reads choice
            choice=keys.nextInt();
            if (choice==1){
                //Updates the dragon's power after a sword attack is lanuched
                dragon_defeated -=30;
                System.out.println("Sword attack  is successful.");
            } else {
                //Updates the dragon's power after a fireball attack is lanuched
                dragon_defeated -=10;
                System.out.println("Fireball attack  is successful.");
            }

            if (dragon_defeated <=0){
                dragon_slayed =true;
            }else{
            //Updates the user on the power of the dragon
            System.out.println("Keep going the Dragon is only has  "+ dragon_defeated+" % power left.");}
        }
        // allows the user to enter the castle
        System.out.println("You have succefully entered the castle by defeating the dragon Welcome!");    
    }

}


