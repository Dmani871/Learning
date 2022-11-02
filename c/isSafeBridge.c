#include <stdio.h>
#include <stdbool.h>

bool isSafeBridge(char bridge[]){
    char prev='#';
    int i=0;
    char curr;
    while((curr=bridge[i])!='\0'){
        if(prev !='#' || curr!='#'){
            return false;
        }
        curr=bridge[i];
        prev=curr;
        i++;
    }
    return true;
}

int main(int argc, char *argv[])
{
    for(int i=1;i<argc;i++){
        printf("%s->%d\n",argv[i],isSafeBridge(argv[i]));
    }
    printf("%d\n",isSafeBridge("######"));
    printf("%d\n",isSafeBridge("###  ##"));
    printf("%d\n",isSafeBridge(" ##  ##"));
    printf("%d\n",isSafeBridge("#"));
    return 0;
}
