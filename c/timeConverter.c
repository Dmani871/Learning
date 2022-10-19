#include <stdio.h>
#define ONE_MIN 60
void clear(){
    char c='\0';
    while((c!='\n')){
        c=getchar();
    }
}
int getInput(char inputPrompt[]){
    printf("%s",inputPrompt);
    int n=-1;
    while((scanf("%d",&n)==-1)&& n<0){
        clear();
        printf("Invalid input try again!");
    }
    return n;
}
int convert(int hours, int minutes) {
	return (hours*(ONE_MIN*ONE_MIN))+(minutes*ONE_MIN);
}
int main(){
    int hours=getInput("Please enter the number of hours:");
    int mins=getInput("Please enter the number of mins:");
    printf("The number of hours %d\n",convert(hours,mins));
}

