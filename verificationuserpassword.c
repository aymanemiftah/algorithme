#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char username[50],password[50];
    int i=1,j=1,verfuser,verfpassword;
    char user[50]="aymane",passw[50]="aymane2004";
        
    do{
        
        printf("\n enter username : \n");
        scanf("%s",username);
        printf(" enter password : \n");
        scanf("%s",password);
        verfuser=strcmp(username,user);
        verfpassword=strcmp(password,passw);
        if(verfuser == 0){
            do{
                if(verfpassword == 0){
                printf("welcome to your account :)");
                break;
                }else{
                    printf("le password et incorrect try again.\n");
                }
                printf(" enter password : \n");
                scanf("%s",password);
                j++;
            }while(j<=3);     
        break;
        }else{
            printf("username et incorrect try again.\n");
        }
        i++;
        
    }while(i<=3);
    
    
}