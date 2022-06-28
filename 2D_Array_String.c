#include <stdio.h>
int main()
{
     int n;
     printf("Enter the no of cities : ");
     scanf("%d", &n);
     char str[n][100];
     printf("Enter the names of %d cities : \n",n);
     for (int i = 1; i <= n; i++)
     {
          printf("Enter %d no. city name : ",i);
          scanf("%s", str[i]);
     }
     printf("The name of the cities are : \n");
     for (int i = 1; i <= n; i++)
     {
          printf("%d:",i);
          puts(str[i]);
          // printf("%s,",str[i]);
     }
     return 0;
}

// #include <stdio.h>
// int main()
// {
//      char str[5][100];
//      for (int i = 0; i < 5; i++)
//      {
//           printf("Enter a string : ");
//           scanf("%s",str[i]);
//      }
//      for (int i = 0; i < 5; i++)
//      {
//           puts(str[i]);
//           // printf("%s,",str[i]);
//      }

//      return 0;
// }