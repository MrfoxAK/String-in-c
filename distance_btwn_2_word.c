#include <stdio.h>
#include <string.h>
int main()
{
     char str[50], s1[50], s2[50];
     printf("Input string: ");
     gets(str);
     printf("Input 1st word : ");
     scanf("%s", &s1);
     printf("Input 2nd word : ");
     scanf("%s", &s2);
     int len = strlen(str);
     int i = 0, j = 0, found = 0;
     while (str[i] != '\0')
     {
          if (str[i] == s1[0])
          {
               found = 1;
               while (s1[j] != '\0')
               {
                    if (str[i + j] != s1[j])
                    {
                         found = 0;
                         break;
                    }
                    j++;
               }
          }
          if (found == 1)
          {
               break;
          }
          i++;
     }
     int i2=0;
     j=0;
     found=0;
     while (str[i2] != '\0')
     {
          if (str[i2] == s2[0])
          {
               found = 1;
               while (s2[j] != '\0')
               {
                    if (str[i2 + j] != s2[j])
                    {
                         found = 0;
                         break;
                    }
                    j++;
               }
          }
          if (found == 1)
          {
               break;
          }
          i2++;
     }
     int dis = i2-i;
     printf("Distance Btwn %s & %s is : %d",s1,s2,dis);
     return 0;
}