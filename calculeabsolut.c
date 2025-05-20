#include <stdio.h>
#include <stdlib.h>
int main(){
    int a ,b;
    printf("enter le nombre pour calcule absolut: \n");
    scanf("%d",&a);
    if(a >=0){
        printf("absolut et de ce nombre et %d",a);
    }else if(a < 0){
        b = a*(-1);
        printf("absolut et %d",b);
    }
    return 0;
}