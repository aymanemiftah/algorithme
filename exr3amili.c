#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,s=1;
    printf("enter un nombre\n");;
    scanf("%d",&n);
    i=n;
    if(n>=0){
    // for(i=n;i>0;i--){
    //         s=s*i;
    //         }
    // while(i>0){
        
    //     s=s*i;
    //     i--;
    // }
    do{
        s=s*i;
        i--;
    }while(i>0);
            printf("%d",s);
    }else{
        printf("le nombre dois etre positiv");
    }
    
    
   
    return 0;
}