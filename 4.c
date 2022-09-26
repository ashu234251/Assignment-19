// 4. Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>

int main()
{
    int size,i,j=0;
    printf("Enter Number of Strings: ");
    scanf("%d",&size);

    char str[size][50],search[50];
    printf("Enter %d Strings: \n",size);
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0';
         
    }
    printf("Enter String to be Searched: ");
    fgets(search,50,stdin);
    if(search[strlen(search)-1]=='\n')
      search[strlen(search)-1]='\0';

    for(i=0;i<size;i++)
    {
       if(strcmp(search,str[i])==0)
        {
         printf("%s is at position %d. \n",search,i+1);
         j++;
        }
    }
    if(j==0)
     printf("%s is not present in the list of Strings.",search);
     
    return 0;
}