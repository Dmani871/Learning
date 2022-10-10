/**
 * Add multiple intergers from command line arguments
 */
#include <stdio.h>
int addition(int x, int y){
    return x+y;
}
int main(int argc,char *argv[]){
    // requires at least 1 argument
    if (argc < 2) return -1;
    // stores the sum of all calculations
    int sum=0;
    for(int i=1;i<argc;i++){
        // holds the int value parsed
        int n = 0; 
        // adds sign to parsed int
        int flip = 1;
        char c;
        int j=0;
        // reads all chars in string
        while ((c=argv[i][j])!='\0') {
            // if no numbers have been found flip to -
            if (n==0 && c=='-'){
                flip = -1;
            }
            // only parse ints
            if (c >= '0' && c <= '9'){
                n = n*10 + (c - '0');
            }
            j++;
        }
        // adds sign to int
        n=n*flip;
        // displays parsed ints
        if (i==argc-1){
            printf(" %d",n);
        } else {
            printf(" %d +",n);
        }
        
        sum=addition(sum,n);
    }
    printf(" = %d \n",sum);
}
