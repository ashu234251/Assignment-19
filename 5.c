// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

/*
#include<stdio.h>
#include<string.h>

int main()
{
    int size,i,j;
    printf("Enter Number of Email Addresses: ");
    scanf("%d",&size);

    char str[size][50];
    printf("Enter %d Email Addresses: \n",size);
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0';
    }
    for(i=0;i<size;i++)
    {
        for(j=0;str[i][j];j++)
         {
            if(str[i][j]=='@')
            break;
         }
        if(str[i][j]=='\0')
          printf("%s doesn't have @. \n",str[i]);
    }
    return 0;

}
*/
// Alternate using function strchr(). if character not found, then returns zero.


#include<stdio.h>
#include<string.h>
int main()
{
  int size,i,j;
    printf("Enter Number of Email Addresses: ");
    scanf("%d",&size);

    char str[size][50];
    printf("Enter %d Email Addresses: \n",size);
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0';
    }

    for(i=0;i<size;i++)
    {
      if(strchr(str[i],'@')==0)
      printf("%s doesn't have @ in it.\n",str[i]);
    }
    return 0;
}