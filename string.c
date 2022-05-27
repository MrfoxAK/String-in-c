// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     // char greetstings[] = "Hello World!";
//     // printf("%s", greetstings);
//     // char greetings[] = "Hello World!";
//     // greetings[0] = 'J';
//     // printf("%s", greetings);
//     char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//     char greetings2[] = "Hello World!";
//     printf("%s\n", greetings);
//     printf("%s\n", greetings2);
//     return 0;
// }



#include <stdio.h>
void printstr(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char name[] = {'A','K','A','S','H','\0'};
    char n[] = "AKASH";
    // printstr(name);
    // printf("%s\n",name);
    // printf("%s\n",n);
    char str[35];
    gets(str);
    printf("Using Puts\n");
    puts(str);
    printf("Using s\n");
    printf("%s\n",str);
    printf("Using custom func\n");
    printstr(str);

    return 0;
}





