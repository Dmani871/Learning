#include <stdio.h>

int numberSyllables(char word[]){
    char c;
    int i=0;
    int syllableCounter=0;
    while ((c=word[i])&&c!='\0')
    {
        if(c=='-'){
            syllableCounter++;
        }
        i++;
    }
    return syllableCounter+1;
}


int main(int argc,char *argv[]){
    for (int i=1;i<argc;i++){
        printf("%s has %d number of syllables\n",argv[i],numberSyllables(argv[i]));
    }
}

