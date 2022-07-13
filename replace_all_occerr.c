#include <stdio.h>
#include <string.h>

int main()
{
     int count[50], max = 0, c;
     char s[50];
     char replace, replacewith;
     
     printf("Enter a string : ");
     gets(s);

     int len = strlen(s);

     printf("Input character to replace: ");
     replace = getchar();

     // Dummy getchar() to eliminate extra ENTER character
     getchar();

     printf("Input character to replace with: ");
     replacewith = getchar();

     for (int i = 0; i < len; i++)
     {
          if (s[i] == replace)
          {
               s[i] = replacewith;
          }
     }

     puts(s);
     return 0;
}
