#include "../header/skyscraper_h.h"

void    last_number_verti(char skyscraper[6][6])
{
        int     i;
        int     j;
        int     result;
        int     count;

        j = 1;
        while (j < 5)
        {
                i = find_zero_verti(skyscraper, j);
                if (i)
                {
                        count = numbers_count_verti(skyscraper,j);
                        result = (10 - count) + 48;
                        skyscraper[i][j] = result;
                }
                j++;
        }
}
/*-----------------------------------------------------------------------*/
int     find_zero_verti(char skyscraper[6][6], int j)
{
        int     i;
        int     k;
        int     find;

        i = 1;
        find = 0;
        while (i < 5)
        {
                if (skyscraper[i][j] == '0')
                {
                        find++;
                        k = i;
                }
                i++;
        }
        if (find == 1)
                return (k);
        return (0);
}
/*-----------------------------------------------------------------------*/
int     numbers_count_verti(char skyscraper[6][6], int j)
{
        int     i;
        int     count;

        i = 1;
        count = 0;
        while (i < 5)
        {
                if (skyscraper[i][j] != '0')
                        count = count + (skyscraper[i][j] - 48);
                i++;
        }
        return (count);
}
