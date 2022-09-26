// 3. Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    printf("Enter Number of Strings: ");
    scanf("%d",&n);

    printf("Enter %d Strings: \n",n);
    char str[n][50];
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0' ;
    }
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
    return 0;
}