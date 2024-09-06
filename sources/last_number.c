#include "../header/skyscraper_h.h"

void	last_number_hori(char skyscraper[6][6])
{
	int	i;
	int	j;
	int	result;
	int	count;

	i = 1;
	while (i < 5)
	{
		j = find_zero_hori(skyscraper, i);
		if (j)
		{
			count = numbers_count_hori(skyscraper,i);
			result = (10 - count) + 48;
			skyscraper[i][j] = result;	
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
int	find_zero_hori(char skyscraper[6][6], int i)
{
	int	j;
	int	k;
	int	find;

	j = 1;
	find = 0;
	while (j < 5)
	{
		if (skyscraper[i][j] == '0')
		{	
			find++;
			k = j;
		}
		j++;
	}
	if (find == 1)
		return (k);
	return (0);
}
/*-----------------------------------------------------------------------*/
int	numbers_count_hori(char skyscraper[6][6], int i)
{
	int	j;
	int	count;

	j = 1;
	count = 0;
	while (j < 5)
	{
		if (skyscraper[i][j] != '0')
			count = count + (skyscraper[i][j] - 48);
		j++;
	}
	return (count);
}
/*-----------------------------------------------------------------------*/
int	check_for_zero(char skyscraper[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while(j < 5)
		{
			if (skyscraper[i][j] == '0')
				return (1);
			j++;
		}
		j = 1;
		i++;
	}
	return (0);
}
