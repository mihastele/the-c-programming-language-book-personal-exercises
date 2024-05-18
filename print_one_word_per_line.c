#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
    int c;
    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
        {
            if (state == OUT)
                putchar('\n');

            state = IN;
        }
        else
        {
            putchar(c);
            state = OUT;
        }
    }
}