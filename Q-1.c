/*Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123

Output:
Your password is Strong.

-----------------------------------------

For example,
Input:
Create your password: hello#89

Output:
Your password is not Strong.*/

#include<stdio.h>
#include<string.h>

void main()
{
	int a,len,upr=0,lwr=0,no=0,special=0;
	char psw[100];
	
	printf("enter the password:- \n");
	gets(psw);
	
	len=strlen(psw);
	printf("length of your password is :- %d\n",len);
	
	for(a=0;a<=len;a++){
		if(psw[a]>='A' && psw[a]<='Z' ) upr++;
		if(psw[a]>='a' && psw[a]<='z' ) lwr++;
		if(psw[a]>='0' && psw[a]<='9' ) no++;
		if(psw[a]=='@' || psw[a]=='$' ) special++;
	}
		if(upr>0 && lwr>0 && no>0 && special>0){
			printf("your password is strong");
		}
		else{
			printf(" your password is weak");
		}
}
