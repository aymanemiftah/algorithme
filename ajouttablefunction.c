#include <stdio.h>
#include <stdlib.h>

int Ajouter(int t[]){
    int n,i;
    printf("enter le nombre de case :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("remplir la case numero %d :\n",i+1);
        scanf("%d",&t[i]);
    }
    return n ;
}
void show(int t[], int n){
    int i ;
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}

int main(){
    int t[30],n;
    n = Ajouter(t);
    show(t,n);
}