#include <stdio.h>
#include<stdlib.h>

void clearInput(){
    while (getchar() != '\n')
        continue;
}
float getInput(char *inputPrompt){
    printf("%s",inputPrompt);
    float inputFloat=-1;
    while(scanf("%f",&inputFloat)!=1 && inputFloat<0)
    {
        clearInput();
        printf("Must be an integer value greater than 0\n");
        printf("Try again:\n");
    }
    return inputFloat;
}
float triArea(float base,float height ){
    return (base * height) / 2;
}
int main(int argc,char * argv[]){
    float base=getInput("Please enter the base:");
    float height=getInput("Please enter the height:");
    printf("Area=%f \n",triArea(base,height));
}

