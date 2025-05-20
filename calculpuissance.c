#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,p,i=1,c=1;
    printf("enter le nombre premier\n");
    scanf("%d",&a);
     printf("enter le nombre de puissance\n");
    scanf("%d",&p);
    ;
    // for(i=1;i<=p;i++){
    //     c=c*a;
    // }
    // while(i<=p){
    //     c=c*a;
    //     i++;
    // }
    do{
        c=c*a;
        i++;
    }while(i<=p);
    printf("%d",c);

}