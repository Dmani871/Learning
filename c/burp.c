#include <stdio.h>
#include <stdlib.h>
char* longBurp (int num){
    int size=num+4;
    char *out=malloc(size);
    out[0]='B';
    out[1]='u';
    for (int i=0;i<num;i++){
        out[i+2]='r';
    }
    out[size-2]='p';
    out[size-1]='\0';
    return out;
}
void clearOutput(){
    char c='\0';
    while (c!='\n'){
        c=getchar();
    }
}
int getInput(char *inputString){
    int n=-1;
    printf("%s",inputString);
    while((scanf("%d",&n)!=1) && n<0){
        clearOutput();
        printf("Invalid input try again");
    }
    return n;
}
int main(){
    int n=getInput("Please enter the ammount of r's you want");
    printf("%s",longBurp(n));
}

