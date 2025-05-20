#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("enter les 3 nombre ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        
            printf(" le plus grand numero et %d",a);
        
    }else if(b>a && b>c){
        
            printf(" le plus grand numero et %d",b);
        
    }
    else if(c>a && c>b){
        
            printf(" le plus grand numero et %d",c);
        
    }
    return 0;
}