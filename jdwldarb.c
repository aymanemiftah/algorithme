#include <stdio.h>
#include <stdlib.h>
int main(){
    int i , j;
    for(i=1;i<=10;i++){
        for (j=0;j<=10;j++){
            printf("\n%dx%d=%d",i,j,i*j);
        }
    }
}