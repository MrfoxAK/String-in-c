#include <stdio.h>
#include <string.h>

int main()
{
     char str[15];
     char strv[15];
     int flag=0;
     printf("Enter the String: \n");
     gets(str);
     int len = strlen(str);
     for (int i = 0; i < len; i++)
     {
          if (str[i]!=str[len-i-1])
          {
               flag=1;
          }
          break;
     }
     if (flag==1)
     {
          printf("%s is not a palindrome string\n",str);
     }
     else{
          printf("%s is a palindrome\n",str);
     }
     return 0;
}





// #include <stdio.h>
// #include <string.h>

// int main()
// {
//      char str[15];
//      char strv[15];
//      int sum=65;
//      printf("Enter the String: \n");
//      gets(str);
//      int len = strlen(str);
//      for (int i = len-1; i >=0; i--)
//      {
//           sum=sum+str[i];
//           printf("%c",sum);
//      }
//      return 0;
// }