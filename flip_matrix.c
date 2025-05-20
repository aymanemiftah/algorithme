#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j , t[5]={1,2,3,4,5},n;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            n=t[j];
            t[j]=t[i];
            t[i]=n;
        }

    }
    for(i=0;i<5;i++){
        printf("%d ",t[i]);
    }
}