#include <stdio.h>
#include <string.h>

int main()
{
    char email[50];
    char password[20];
    printf("Enter your username :- ");
    scanf("%s",&email);
 
    printf("Enter your password :- ");
    scanf("%s",&password);
 
    if(strcmp(email,"foramsavaliya2804@gmail.com")==0)
    {
        if(strcmp(password,"20982098")==0)
        {
 
            printf("Login Successfull");
        }
        else
        {
             printf("wrong password");
        }
    }
    else
    {
    printf("login invaild");
} 
}

