#include <stdio.h>
#include <string.h>
int main()
{
     char temp;
     char s[50];
     char* str=s;
     printf("Enter a str: ");
     gets(str);
     int len = strlen(s);
     for (int i = 0; i < len/2; i++)
     {
          temp = *(&str[i]);
          *(&str[i]) = *(&str[len-1-i]);
          *(&str[len-1-i]) = temp;
     }
     printf("reverse str: ");
     puts(str);
     return 0;
}