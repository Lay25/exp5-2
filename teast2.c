#include <stdio.h>

int main()
{
    int p, s, g1, g2;
    int x;

    /* printf return value */
    p = printf("Heorld\n");
    printf("printf return value = %d\n\n", p);

    /* scanf return value */
    printf("Enter an integer: ");
    s = scanf("%d", &x);
    printf("scanf return value = %d\n\n", s);

    /* getchar return value */
    printf("Enter a character: ");
    g1 = getchar();   // reads one character
    printf("\ngetchar return value (ASCII) = %d\n", g1);

    /* getch return value */

    return 0;
}

