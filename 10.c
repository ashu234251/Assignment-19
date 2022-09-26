// 10. Create an authentication system. It should be menu driven.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char username[5][30], password[5][30];
    char str1[30],str2[30];
    int i,x,u=0,p=0;
    for(i=0;i<2;i++)
    {
     printf("Enter Username: ");
     gets(username[i]);
     printf("Enter Password: ");
     gets(password[i]);
     printf("-----------------------\n");
    }

    printf("\n------Entry Start----\n");
    printf("Enter 1 for starting Validaton.\n");
    printf("Enter 2 for Exit.\n");

   while(1)
    {
    printf("Enter Your Choice: ");
    scanf("%d",&x);
   switch(x)
    {
    case 1: 
    printf("Enter Username: ");
    fflush(stdin);
    gets(str1);
    printf("Enter Password: ");
    fflush(stdin);
    gets(str2);

    for(i=0;i<2;i++)
    {
     if(strcmp(username[i],str1)==0 && strcmp(password[i],str2)==0)
     {
      printf("Authenticated.\n");
      break;
     }
    }
    if(i==2)
      printf("Not Authenticated, Username and Password do not match.\n");
    
    break;

    case 2:
          exit(0);
    }
    
    }
    return 0;
}