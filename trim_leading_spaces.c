#include <stdio.h>
int main()
{
     int j=0,i;
     char s[50];
     printf("Enter a string : ");
     gets(s);
     // calculate how many white spaces
     while (s[j]==' ')
     {
          j++;
     }
     // printf("%d",j);
     if (j!=0)
     {
          i = 0;
          while (s[i+j]!='\0')
          {
               s[i]=s[i+j];
               i++;
          }
          s[i]='\0';
     }
     puts(s);
     return 0;
}