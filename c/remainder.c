#include <stdio.h>

int remainderCal(int x, int y){
    return x%y;
}


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

int main(){
    int x=getInput("Please enter the x:");
    int y=getInput("Please enter the y:");
    printf("Remainder=%d",remainderCal(x,y));
}
