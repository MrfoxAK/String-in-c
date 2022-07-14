#include <stdio.h>
#include <string.h>
int main()
{
     char str[50], s[50];
     printf("Input string: ");
     gets(str);
     printf("Input word to search: ");
     scanf("%s", &s);
     int len = strlen(str);
     int i = 0, j = 0, found = 0;
     while (str[i] != '\0')
     {
          if (str[i] == s[0])
          {
               found = 1;
               while (s[j] != '\0')
               {
                    if (str[i + j] != s[j])
                    {
                         found = 0;
                         break;
                    }
                    j++;
               }
          }
          if (found==1)
          {
               break;
          }
          i++;
     }
     if (found==1)
     {
          printf("%s is found at index %d",s,i);
     }
     else
     {
          printf("%s is not found",s);
     }
     
     return 0;
}