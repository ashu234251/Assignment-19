/*
9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/

#include<stdio.h>
#include<string.h>

int factorial(int);

int main()
{
   char  str[5][50]={"ashish","ashish1","ashish2","ashish3","ashish4"};
   char username[50];
   int i,n;
   printf("Enter a Username: ");
   fgets(username,50,stdin);
   if(username[strlen(username)-1]=='\n')
     username[strlen(username)-1]='\0';

    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],username)==0)
          break;
    }

    if(i==5)
     printf("Error.");
    else
     {
        printf("Enter a Number: ");
        scanf("%d",&n);
        printf("Factorial of %d is %d.",n,factorial(n));
     }

     return 0;
}

int factorial(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
     {
        f=f*i;
     }
     return f;
}