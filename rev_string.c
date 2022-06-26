#include <stdio.h>
int main()
{
     char str[50], str1[50];
     int len = 0;
     printf("Enter the str: ");
     gets(str);
     // puts(str);

     // for calculating strlen
     while (str[len] != '\0')
     {
          len++;
     }
     // printf("%d",len);

     // Copy a str to another str
     // for (int i = 0; i < len; i++)
     // {
     //      str1[i] = str[i];
     // }
     // str1[len] = '\0';
     
     int temp;
     for (int i = 0; i < len / 2; i++)
     {
          temp = str[i];
          str[i] = str[len - 1 - i];
          str[len - 1 - i] = temp;
     }
     puts(str);
     return 0;
}