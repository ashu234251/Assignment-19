// 6. Write a program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>

int main()
{
    int size,i,j,l;
    printf("Enter Number of Strings: ");
    scanf("%d",&size);

    char str[size][50],rev[50]={};
    printf("Enter %d Strings: \n",size);
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0';
         
    }
    for(i=0;i<size;i++)
    {
       l=strlen(str[i]);
       for(j=0;j<l;j++)
       {
        rev[l-1-j]=str[i][j];
       }
       if(strcmp(rev,str[i])==0)
         printf("%s is an Palindrome. \n",str[i]);
    }
    return 0;
}