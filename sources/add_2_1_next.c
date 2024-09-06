#include "../header/skyscraper_h.h"

void    check_3and2_verti(char skyscraper[6][6])
{
        int     i;

        i = 1;
        while (i < 5)
        {
                if (skyscraper[0][i] == '3' && skyscraper[5][i] == '2')
                {
                        if (skyscraper[4][i] == '3' && skyscraper[3][i] == '4')
                        {
                                skyscraper[2][i] = '2';
                                skyscraper[1][i] = '1';
                        }
                }
                if (skyscraper[0][i] == '2' && skyscraper[5][i] == '3')
                {
                        if(skyscraper[1][i] == '3' && skyscraper[2][i] == '4')
                        {
                                skyscraper[3][i] = '2';
                                skyscraper[4][i] = '1';
                        }
                }
                i++;
        }
}
/*-----------------------------------------------------------------------*/
void    check_3and2_hori(char skyscraper[6][6])
{
        int     i;

        i = 1;
        while (i < 5)
        {
                if (skyscraper[i][0] == '3' && skyscraper[i][5] == '2')
                {
                        if (skyscraper[i][4] == '3' && skyscraper[i][3] == '4')
                        {
                                skyscraper[i][2] = '2';
                                skyscraper[i][1] = '1';
                        }
                }
                if (skyscraper[i][0] == '2' && skyscraper[i][5] == '3')
                {
                        if(skyscraper[i][1] == '3' && skyscraper[i][2] == '4')
                        {
                                skyscraper[i][3] = '2';
                                skyscraper[i][4] = '1';
                        }
                }
                i++;
        }
}
/*-----------------------------------------------------------------------*/
void	check_1_3_verti(char skyscraper[6][6])
{
	int	i;
	
	i = 1;
	while (i < 5)
	{
		if (skyscraper[0][i] == '1' && skyscraper[5][i] == '3')
		{
			if(skyscraper[1][i] == '4' && skyscraper[2][i] == '3')
			{
				skyscraper[3][i] = '1';
				skyscraper[4][i] = '2';
			}
		}
		if (skyscraper[0][i] == '3' && skyscraper[5][i] == '1')
		{
			if(skyscraper[4][i] == '4' && skyscraper[3][i] == '3')
			{
				skyscraper[2][i] = '1';
				skyscraper[1][i] = '2';
			}
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	check_1_3_hori(char skyscraper[6][6])
{
	int	i;
	
	i = 1;
	while (i < 5)
	{
		if (skyscraper[i][0] == '1' && skyscraper[i][5] == '3')
		{
			if(skyscraper[i][1] == '4' && skyscraper[i][2] == '3')
			{
				skyscraper[i][3] = '1';
				skyscraper[i][4] = '2';
			}
		}
		if (skyscraper[i][0] == '3' && skyscraper[i][5] == '1')
		{
			if(skyscraper[i][4] == '4' && skyscraper[i][3] == '3')
			{
				skyscraper[i][2] = '1';
				skyscraper[i][1] = '2';
			}
		}
		i++;
	}
}
