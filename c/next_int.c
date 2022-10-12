#include <stdio.h>
#include<stdbool.h>  
int next_int(int n){
    return n+1;
}

int main(int argc,char* argv[]){
    for (int i=1;i<argc;i++){
        int j=0;
        int flip=1;
        int n=0;
        bool is_int=false;
        char c;
        while((c=argv[i][j]) && c!='\0'){
            if (c=='-' && n==0){
                flip=-1;
            }
            if (c>='0' && c<='9'){
                n=n*10+(c-'0');
                is_int=true;
            }
            j++;
        }
        n=flip*n;
        if (is_int){
            printf("%d -> %d\n",n,next_int(n));
        }
    }
}
