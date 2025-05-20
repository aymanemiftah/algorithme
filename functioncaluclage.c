#include <stdio.h>
#include <stdlib.h>

int calculeage(int datenaissance,int dateacctuel){
    int age;
    age = dateacctuel - datenaissance;
    printf("l'age et :%d",age);

}
int main(){
    int daten,dateac;
    printf("enter la date de naissance :\n");
    scanf("%d",&daten);
    printf("enter la date de acctuel :\n");
    scanf("%d",&dateac);
    calculeage(daten,dateac);
}