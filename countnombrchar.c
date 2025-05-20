#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[30];
    int count=0,i=0;
    printf("enter une string :\n");
    scanf("%s",str);
    while(str[i] != '\0'){
        count++;
        i++;
    }
    printf("%d",count);

}