#include <stdio.h>
#include <string.h>
int main()
{
     char str[100];
     printf("Enter any string : ");
     gets(str);

     int len = strlen(str);
     int freq[len];

     int i,j,k;

     for (int z = 0; z < len; z++)
     {
          freq[z] = 1;
     }
     

     for ( i = 0; i < len; i++)
     {
          for ( j = i+1; j < len; j++)
          {
               if (str[i] == str[j])
               {
                    freq[i]++;
                    freq[j]++;
               }
          }
     }
     
     
     for (int z = 0; z < len; z++)
     {
          printf("%d ",freq[z]);
     }


     i = 0,j=0;
     int min=freq[0];
     for ( i = 0; i < len; i++)
     {
          if (min>=freq[i])
          {
               min = freq[i];
          }
     }
     
     printf("\n%d is min",min);
     int minIndex=0;
     for ( k = 0; k < len; k++)
     {
          if (freq[k] == min)
          {
               minIndex=k;
          }
          
     }
     

     printf("\nThe Minimum occurring character is : %c",str[minIndex]);



     return 0;
}