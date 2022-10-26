#include <stdio.h>
#include <stdbool.h>

bool reverse(bool x){
    return x!=true;
}

int main(){
    printf("%d",reverse(true));
    printf("%d",reverse(false));
}

