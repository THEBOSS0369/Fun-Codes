#include <stdio.h>

int main()
{
    int w = 40;
    while (1)
    {
        for (int i = 1; i <= w * (w + 1); i++)
            printf(
                "%c",
                i % (w + 1) == 0 ? '\n' : i % (w) == 0 || i % (w + 2) == 1 ? '*'
                                                                           : ' ');
    }
}