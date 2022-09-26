// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][50], min[50];
    int i,j;
    printf("Enter Name of 10 Cities: \n");
    for(i=0;i<10;i++)
    {
        fflush(stdin);
        fgets(str[i],50,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
          str[i][strlen(str[i])-1]='\0' ;
    }
    for(i=0;i<9;i++)
    {
      strcpy(min,str[i]);
      for(j=i+1;j<10;j++)
       {
          if(strcmp(min,str[j])!=-1)
           {
             strcpy(min,str[j]);
             strcpy(str[j],str[i]);
             strcpy(str[i],min);
           }
       }
    }
    printf("Cities in Sorted Order are: ");
    for(i=0;i<10;i++)
    {
        printf("%s  ",str[i]);
    }

    return 0;

}