#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[30],n,i,max=0,min=100;
    printf("enter la nomvre de case de tableux : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf(" \nenter la valuer de case %d : ",i);
        scanf("%d",&T[i]);
    }

    for(i=1;i<=n;i++){
        if(T[i] > max){
            max=T[i];
        }else{
            
        }
    }
    for(i=1;i<=n;i++){
        if(T[i] < min){
            min=T[i];
        }else{
            
        }
    }
    printf(" le max et : %d",max);
    printf(" le min et : %d",min);
}