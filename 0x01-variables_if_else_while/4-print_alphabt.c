#include <stdio.h>

/**
 * main - prints the alphabets except q and e in lowercase
 * Return: Always runs correctly
 */
int main(void)
{
        char alph;

        for (alph = 'a'; alph <= 'z'; alph++)
        {
                if ((alph == 'q') || (alph == 'e'))
                        continue;
                putchar(alph);
        }
        putchar('\n');
        return (0);
}
