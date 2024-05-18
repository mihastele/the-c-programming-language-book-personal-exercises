#include <stdio.h>

int main()
{
    int c; // Must be int due to EOF being an int and support any char

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

int main2()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}

int character_count()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

int character_count2()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
