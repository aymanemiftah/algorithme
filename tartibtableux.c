#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n,T[5]={5,4,2,1,3} ;
    
    for(j=0;j<5;j++){
        for(i=j+1;i<5;i++){
            if(T[j]>T[i]){
                n=T[j];
                T[j]=T[i];
                T[i]=n;
            }else{}
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",T[i]);
    }
}