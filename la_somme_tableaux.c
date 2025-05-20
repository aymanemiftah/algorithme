#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n,tab[30],s=0;
    printf("enter le nombre de la case ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        printf("enter le nombre de la case %d: \n",i);
        scanf("%d",&tab[i]);
    }
    j=0;
    while(j<n){
        printf("%d' '",tab[j]);
        j++;
    }
    for(i=1 ; i<=n;i++){
        s=s+tab[i];
    }
    printf("la somme de tableux et : %d",s);
}