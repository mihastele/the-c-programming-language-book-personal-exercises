#include <stdio.h>

void replace_multi_blank()
{
    int c;
    int num_blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++num_blank;
            if (num_blank == 1)
                putchar(c);
        }
        else
        {
            num_blank = 0;
            putchar(c);
        }
    }
}

void replace_special()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}

int main()
{

    replace_special();

    // count blanks
    int c, nb;

    nb = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ')
            ++nb;
    printf("%d\n", nb);
}
