#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p=NULL;
    p=fopen("text.txt","w+");
    if(p == NULL){
        return -1;
    }
    fprintf(p,"%s  %d","aymane",20);
    char name[30];
    int age;
    rewind(p);
    fscanf(p,"%s %d",name,&age);
    printf("%s %d",name,age);
    fclose(p);
}