#include <stdio.h>
#include <string.h>
int main()
{
     char s1[50],s2[50],sum[50];
     printf("Enter the 1st string : ");
     gets(s1);
     printf("Enter the 2nd string : ");
     gets(s2);
     int l1,l2;
     l1 = strlen(s1);
     l2 = strlen(s2);
     int i ,k = 0;
     for ( i = 0; i < l1; i++)
     {
          sum[i] = s1[i];
     }
     for ( i ; i <= l1+l2; i++)
     {
          for ( k ; k <= i-l1; k++)
          {
               sum[i] = s2[k];
          }
     }
     sum[i] = '\0';
     // for (int j = 0; j < l1+l2; j++)
     // {
     //      printf("%c",sum[j]);
     // }
     puts(sum);
     return 0;
}