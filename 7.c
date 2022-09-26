// 7. From the list of IP addresses, check whether all ip addresses are valid.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[50],temp[30];
    int i=0,j,x,k,count=0;
    printf("Enter a String: ");
    gets(str);
   
    while(str[i]!='\0')
     {
       strcpy(temp,strtok(str,"."));
       x=atoi(temp);
       if(x<0 || x>255)
        {
            printf("Invalid IP.");
            break;
        }  
        strcpy(str,strtok(NULL,"."));
     }
     if(str[i]=='\0')
      printf("Valid IP.");

    return 0;
     
}