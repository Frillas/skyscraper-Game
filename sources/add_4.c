#include "../header/skyscraper_h.h"

void	check_3and2(char skyscraper[6][6])
{
	int	i;
	
	i = 1;
	while(i < 5)
	{
		if (skyscraper[0][i] == '3' && skyscraper[5][i] == '2')
			skyscraper[3][i] = '4'; 
		if (skyscraper[0][i] == '2' && skyscraper[5][i] == '3')
			skyscraper[2][i] = '4';
		if (skyscraper[i][0] == '3' && skyscraper[i][5] == '2')
			skyscraper[i][3] = '4';
		if (skyscraper[i][0] == '2' && skyscraper[i][5] == '3')
			skyscraper[i][2] = '4';
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	last_4(char skyscraper[6][6], int i, int j)
{
	int	count_i;
	int	count_j;

	count_i = 0;
	count_j = 0;
	while (i < 5)
	{
		while (j < 5 && (skyscraper[i][j] != '4'))
		{
			if(skyscraper[i][j] != '4')
				j++;
		}
		if (skyscraper[i][j] == '4')
		{
			count_i = count_i + i;
			count_j = count_j + j;
		}
		i++;
		j = 1;
	}
	i = 10 - count_i;
	j = 10 - count_j;
	if((i > 1 && i < 4) && (j > 1 && j < 4))
		skyscraper[i][j] = '4';
}
/*-----------------------------------------------------------------------*/
void	check_2and1(char skyscraper[6][6])
{
	int	i;
	
	i = 2;
	corner_check(skyscraper, 1, 0);
	while (i < 4)
	{
		if(skyscraper[0][i] == '1' && skyscraper[5][i] == '2')
			skyscraper[4][i] = '3';
		if(skyscraper[5][i] == '1' && skyscraper[0][i] == '2')
			skyscraper[1][i] = '3';
		if(skyscraper[i][0] == '1' && skyscraper[i][5] == '2')
			skyscraper[i][4] = '3';
		if(skyscraper[i][5] == '1' && skyscraper[i][0] == '2')
			skyscraper[i][1] = '3';
		i++;
	}
	corner_check(skyscraper, 4, 5);
}
/*-----------------------------------------------------------------------*/
void	corner_check(char skyscraper[6][6], int i, int k)
{
	if (skyscraper[0][i] == '1' && skyscraper[5][i] == '2')
	{
		if (skyscraper[4][k] == '2')
			skyscraper[4][i] = '3';
	}
	if (skyscraper[5][i] == '1' && skyscraper[0][i] == '2')
	{
		if (skyscraper[1][k] == '2')
			skyscraper[1][i] = '3';
	}
	if (skyscraper[i][0] == '1' && skyscraper[i][5] == '2')
	{
		if (skyscraper[k][4] == '2')
			skyscraper[i][4] = '3';
	}
	if (skyscraper[i][5] == '1' && skyscraper[i][0] == '2')
	{
		if (skyscraper[k][1] == '2')
			skyscraper[i][1] = '3';
	}
}
