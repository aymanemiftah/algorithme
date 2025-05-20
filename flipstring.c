#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void flipstring(char name[],int count){
    int s,i=0,j=0;
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            s=name[j];
            name[j]=name[i];
            name[i]=s;
        }
    }
}
int main(){
    char name[30];
    int i=0,count;
    printf("enter le nom :\n");
    scanf("%s",name);
    
    count = strlen(name);
    
    flipstring(name,count);
    printf("%s",name);
}