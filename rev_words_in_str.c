#include <stdio.h>
int main()
{
     int n,temp;
     printf("Enter the no of words : ");
     scanf("%d", &n);
     char str[n][100];
     printf("Enter the string : ");
     for (int i = 1; i <= n; i++)
     {
          scanf("%s", str[i]);
     }
     printf("Reverse ordered words are : \n");
     for (int i = n; i >= 1; i--)
     {
          printf("%s ",str[i]);
     }
     return 0;
}
