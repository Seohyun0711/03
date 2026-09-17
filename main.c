#include <stdio.h>

int main(void)
{
    char c;
    int i;
    char next;

    printf("input a number : ");
    printf("enter a character : ");
    scanf("%c", &c);

    i = c - '0';
    next = c + 1;

    printf("The input number is %i\n", i);
    printf("the next character of %c (%i) is %c (%i)\n",
           c, c, next, next);

    return 0;
}