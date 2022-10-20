#include <stdio.h>

int findPerimeter(int length,int width){
    return length*2+width*2;

}
void clearInput(){
    char c ='\0';
    while(c!='\n'){
        c=getchar();
    }
}
int getInput(char inputString[]){
    int n=-1;
    printf("%s\n",inputString);
    while((scanf("%d",&n)!=1)&& n<0){
        printf("Invalid input try again!");
        clearInput();
    }
    printf("%d",n);
    return n;
}
int main(){
    int len=getInput("Please enter the length");
    int width=getInput("Please enter the width");
    printf("%d",findPerimeter(len,width));

}

