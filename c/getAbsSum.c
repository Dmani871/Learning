#include <stdio.h>
#include <stdlib.h>
int getAbsSum(int nums[],int size){
    int result=0;
    int n;
    
    for(int i = 0; i < size; i++){
        n=nums[i];
        if (n<0){
            n=n*-1;
        }
        result+=n;
    }
    return result;
}
int main(int argc,char *argv[]){
    int numbers[argc-1];
    for(int i=1;i<argc;i++){
        int n=0;
        char c;
        int j=0;
        int flip=1;
        while((c=argv[i][j])!='\0'){
            if (c=='-'){
                flip=-1;
            }
            if (c>='0' && c<='9'){
                n=n*10+(c-'0');
                
            }
            j++;
        }
        numbers[i-1]=n*flip;
    }
    printf("%d\n",getAbsSum(numbers,argc-1));

}

