#include <stdio.h>
#include <string.h>

void addString(char string[],char concat[],int *counter){
    for (int i=0;string[i]!='\0';i++){
        concat[*counter]=string[i];
        (*counter)++;
    }
}

char* nameString(char string[]){
    char *s = "Edabit"; 
    int size=strlen(s)+strlen(string);
    char concat[size];
    int counter=0;
    addString(s,concat,&counter);
    addString(string,concat,&counter);
    return s;
}
int main(){
    printf("%s\n",nameString("hello"));
}


