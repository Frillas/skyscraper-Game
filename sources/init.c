#include "../header/skyscraper_h.h"

void	init_sky(char skyscraper[6][6])
{
	int	problem;
	
	problem = 0;
	add_4_hori(skyscraper);
	add_4_verti(skyscraper);
	add_1_hori(skyscraper);
	add_1_verti(skyscraper);
	check_3and2(skyscraper);
	check_2and1(skyscraper);
	last_4(skyscraper,1,1);
	add_number_3(skyscraper);
	add_number_2_1(skyscraper);
	problem = checklines(skyscraper);
	problem = checkcolumns(skyscraper);
	if(!problem)
		ft_putchar(skyscraper);
	if(problem)
		error();

}
/*-----------------------------------------------------------------------*/
void	add_4_hori(char skyscraper[6][6])
{
	int	i;
	int	j;
	char	number;
	
	i = 1;
	while (i < 5)
	{
		if (skyscraper[0][i] == '4')
		{
			j = 1;
			number = '1';
			while(j < 5)
				skyscraper[j++][i] = number++;
		}
		if (skyscraper[5][i] == '4')
		{
			j = 1;
			number = '4';
			while(j < 5)
				skyscraper[j++][i] = number--;
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	add_4_verti(char skyscraper[6][6])
{
	int	i;
	int	j;
	char	number;
	
	i = 1;
	while (i < 5)
	{
		if (skyscraper[i][0] == '4')
		{
			j = 1;
			number = '1';
			while (j < 5)
				skyscraper[i][j++] = number++;
		}
		if (skyscraper[i][5] == '4')
		{
			j = 1;
			number = '4';
			while (j < 5)
				skyscraper[i][j++] = number--;
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	add_1_hori(char skyscraper[6][6])
{
	int	i;
	
	i = 1;
	while(i < 5)
	{	
		if (skyscraper[0][i] == '1')
			skyscraper[1][i] = '4';
		if (skyscraper[5][i] == '1')
			skyscraper[4][i] = '4';
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	add_1_verti(char skyscraper[6][6])
{
	int	i;
	
	i = 1;
	while(i < 5)
	{	
		if (skyscraper[i][0] == '1')
			skyscraper[i][1] = '4';
		if (skyscraper[i][5] == '1')
			skyscraper[i][4] = '4';
		i++;
	}
}
