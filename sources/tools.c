#include "../header/skyscraper_h.h"

void    ft_putchar(char skyscraper[6][6])
{
        int     i;
        int     j;

        i = 1;
        j = 1;
        while (i < 5)
        {
                while (j < 5)
                {
                        write(1, &skyscraper[i][j], 1);
                        if(j < 4)
                                write(1, " ", 1);
                        j++;
                }
                write(1, "\n", 1);
                j = 1;
                i++;
        }
}

void error()
{
	write(1, "Error\n", 6);
}
