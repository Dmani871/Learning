#include <stdio.h>

void clearInput(){
    char c='\0';
    while(c!='\n'){c=getchar();}
}
int getInput(char* inputPrompt){
    printf("%s\n",inputPrompt);
    int n=-1;
    while(scanf("%d",&n)!=1 && n<0){
        clearInput();
        printf("Invalid input!Please try again!:");
    }
    return n;

}
int circuitPower(int voltage, int current) {
    return voltage*current;
}
int main(){
    int voltage=getInput("Please enter the voltage:");
    int current=getInput("Please enter the current:");
    printf("Circut power=%d",circuitPower(voltage,current));
}

