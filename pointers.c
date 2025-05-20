#include <stdio.h>
#include <stdlib.h>
void sendpp(int c){
    int x;
    printf("enter un nombre");
    scanf("%d",&x);
    int *y;
    y=c;
    *y=x;
}

int main(){
    int a;
    int *c;
    c=&a ;
    sendpp(c);
    printf("%d",a);
}