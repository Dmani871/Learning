#include <stdio.h>

void clearInput(){
    char c='\0';
    while(c!='\n'){
        c=getchar();
    }
}

int getInput(char inputPrompt[]){
    printf("%s",inputPrompt);
    int n=-1;
    while ((scanf("%d",&n)!=1) && n<1)
    {
        clearInput();
        printf("Invalid input!Please try again:");
    }
    return n;
    
}

int howManySeconds(int hours){
    return hours*60*60;
}
int main(){
    int hours=getInput("Please enter the number of hours:");
    printf("The number of seconds %d \n",howManySeconds(hours));
}

