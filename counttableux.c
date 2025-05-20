#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,count=0,a;
    printf("enter le nombre de case de tableux : \n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("enter le nombre  : \n");
        scanf("%d",&t[i]);
    }
    printf("enter le nombre que tu veux counter  : \n");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a == t[i]){
            count++;
        }
    }
    printf(" \nle count de %d et : %d",a,count);
}