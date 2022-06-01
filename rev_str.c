#include<stdio.h>

int main()
{
    int temp;
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    //printf("%s",str);
    int len = strlen(str);
    for(int i=0; i<len/2; i++) {
    temp=str[i];
    str[i]=str[len-1-i];
    str[len-1-i]=temp;
    }
    printf("%s",str);
    return 0;
}