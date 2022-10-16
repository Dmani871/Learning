#include <stdio.h>

int nextEdge(int side1,int side2){
    return (side1 + side2) - 1;
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
    int side1=getInput("Enter side 1:");
    int side2=getInput("Enter side 2:");
    printf("Longest side=%d\n",nextEdge(side1,side2));
}

