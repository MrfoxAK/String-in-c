#include <stdio.h>
int main()
{
     int i=0,flag=0;
     char c,str[50];
     printf("Enter the string : ");
     gets(str);
     printf("Enter the character to search : ");
     c = getchar();
     while (str[i]!='\0')
     {
          if (str[i]==c)
          {
               flag=1;
               break;
               
          }
          i++;
     }
     if (flag==1)
     {
          printf("Found at : %d\n",i);
     }
     else
     {
          printf("Not Found\n");
     }
     return 0;
}