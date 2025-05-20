#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,r;
    printf("enter l3amaliya 1=X 2=+ 3=- 4=/\n");
    scanf("%d",&a);
    printf("\nenter le premier nombre\n");
    scanf("%d",&b);
    printf("\nenter le duexiem nombre\n");
    scanf("%d",&c);
    switch(a){
    case 1 : 
        r=b*c;
        printf("la resulta et : %d",r);
        break;
    
    case 2 : 
        r=b+c;
        printf("la resulta et : %d\n",r);
        break;
    
    case 3 : 
        r=b-c;
        printf("la resulta et : %d",r);
        break;
    case 4 : 
        r=b/c;
        printf("la resulta et : %d",r);
        break;
    default : 
    printf("ce nombre et incorrect enter un nombre enter 1 et 4");
    break;
}
}