#include <stdio.h>

int animals(int chickens, int cows, int pigs) {
	return (chickens*2)+(cows*4)+(pigs*4);
}
int getPrompt(char inputPrompt[]){
    printf("%s",inputPrompt);
    int n=-1;
    char c='\0';
    while ((scanf("%d",&n)==-1) && n<0)
    {
        while (c!='\n')
        {
            c=getchar();
        }
    }
    return n;
}
int main(){
    int chickens=getPrompt("How many chickens?");
    int cows=getPrompt("How many cows?");
    int pigs=getPrompt("How many pigs?");
    printf("Animals=%d\n",animals(chickens,cows,pigs));
}

