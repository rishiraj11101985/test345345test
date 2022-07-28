//WAP to print "%d" on the screen.

#include<stdio.h>
int main()
{
    printf("%%d");
    printf("\n");
    char a = '%', b = 'd';
    printf("%c%c", a, b);
    printf("\n");
    printf("%c%c", '%', 'd');
    return 0;
}



