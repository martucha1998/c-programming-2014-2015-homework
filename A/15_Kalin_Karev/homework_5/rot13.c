#include <stdio.h>
#define ROT 13

int main(void)
{
    int c, l;
    printf("Enter option: c");
    while ((c = getchar())!=EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            if ((l = c + ROT) <= 'Z')
                    putchar(l);
            else
            {
                l = c - ROT;
                putchar(l);
            }
        }
        else if (c >= 'a' && c <= 'z')
        {
            if ((l = c + ROT) <= 'z')
                putchar(l);
            else
            {
                l = c - ROT;
                putchar(l);
            }
        }
        else
            putchar(c);
    }
    printf("Enter option: d");
return 0;
}
