#include <stdio.h>
int lessThan(int a,int b){
    return (a+b)<100;
}
void clear(){
    char c='\0';
    while (c!='\n')
    {
        c=getchar();
    } 
}
int getInput(char prompt[]){
    printf("%s",prompt);
    int n=-1;
    while((scanf("%d",&n)==-1) && n<0){
        clear();
        printf("Invalid input try again \n");
    }
    return n;
}

int main(){
    int a=getInput("Please enter the a");
    int b=getInput("Please enter the b");
    printf("%d",lessThan(a,b));

}

