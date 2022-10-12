#include <stdio.h>
#define MINUTE 60
int convert(int m){
    return m * MINUTE;
}


int main(int argc,char * argv[]){
    for (int i=1;i<argc;i++){
        int j=0;
        int n =0;
        char c;
        while ((c=argv[i][j]) && c != '\0'){
            if(c>='0' && c <='9'){
                n=n*10+(c - '0');
            }
            j++;
        } 
        printf("%d minutes = %d seconds\n",n,convert(n));
    }
}

