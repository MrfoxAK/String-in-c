#include <stdio.h>
int main()
{
     char str[5][100];
     for (int i = 0; i < 5; i++)
     {
          printf("Enter a string : ");
          scanf("%s",str[i]);
     }
     for (int i = 0; i < 5; i++)
     {
          puts(str[i]);
          // printf("%s,",str[i]);
     }
     
     return 0;
}