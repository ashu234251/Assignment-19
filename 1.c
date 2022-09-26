/*
1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.
*/

#include<stdio.h>
int main()
{
    int i,j,count;
    char str[5][50];

    printf("Enter 5 Strings: \n");
    for(i=0;i<5;i++)
     {
        fgets(str[i],50,stdin);
     }

    for(i=0;i<5;i++)
    {
      count=0;
      for(j=0;str[i][j];j++)
       {
        if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
         count++;
       }
       printf("Number of Vowels in %d String are %d.\n",i+1,count);

    }
    return 0;
}