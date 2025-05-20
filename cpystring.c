#include <stdio.h>
#include <stdlib.h>

void copystring(char *x,char *y){
    int i=0;
    do{
        y[i]=x[i];
        i++;
    }while(y[i] !='\0');
    
}

int main(){
    char text[]="aymane",name[30];
    copystring(text,name);
    printf("%s",name);
}