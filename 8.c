/*
8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][50],str1[50],str2[50];
  int i,a=-1,b=-1,min=100000,x;
  printf("Enter 5 Strings: \n");
  for(i=0;i<5;i++)
  {
    gets(str[i]);
  }
  printf("Enter Two Words: \n");
  fflush(stdin);
  gets(str1);
  fflush(stdin);
  gets(str2);
  
  for(i=0;i<5;i++)
  {
    if(strcmp(str1,str[i])==0)
     a=i;
    if(strcmp(str2,str[i])==0)
     b=i;
    if(a!=-1 && b!=-1)
     {
        x=a-b;
        if(x<0)
          x=-x;

        ((5-x)<x)? x=5-x : (x=x) ;

        if(x<min)
          min=x;
     }
  }
  printf("Minimum Distance is %d",min-1);
  return 0;
}