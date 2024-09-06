#include "../header/skyscraper_h.h"

void	add_3_1_verti(char skyscraper[6][6])
{
	int	i;
	i = 0;
	
	while(i < 5)
	{
		if(skyscraper[0][i] == '2' && skyscraper [5][i] == '2')
		{
			if(skyscraper[2][i] == '4' && skyscraper[3][i] == '2')
			{
				skyscraper[1][i] = '1';
				skyscraper[4][i] = '3';
			}
			if(skyscraper[2][i] == '2' && skyscraper[3][i] == '4')
			{
				skyscraper[4][i] = '1';
				skyscraper[1][i] = '3';
			}
		}
		i++;	
	}
}
/*-----------------------------------------------------------------------*/
void	add_3_1_hori(char skyscraper[6][6])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if(skyscraper[i][0] == '2' && skyscraper [i][5] == '2')
		{
			if(skyscraper[i][2] == '4' && skyscraper[i][3] == '2')
			{
				skyscraper[i][1] = '1';
				skyscraper[i][4] = '3';
			}
			if(skyscraper[i][2] == '2' && skyscraper[i][3] == '4')
			{
				skyscraper[i][4] = '1';
				skyscraper[i][1] = '3';
			}
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
int	last_3(char skyscraper[6][6], int i, int j)
{
	int	count;
	int	find;
	int	k;

	k = 0;
	find = 0;
	while (i < 5)
	{
		count = checkline_for_3(skyscraper,i,&j,&find);
		if (skyscraper[i][j] != '3' && find == 1)
		{
			j = 10 - count;
			skyscraper[i][j] = '3';
		}
		else if (skyscraper[i][j] != '3' && find > 1)
			k = i;
		i++;
		j = 1;
		find = 0;
	}
	return (k);
}
/*-----------------------------------------------------------------------*/
int	checkline_for_3(char skyscraper[6][6], int i, int *p_j, int *find)
{
	int	result;
	int	count;
	int	j;
	
	j = *p_j;
	count = 0;
	while (j < 5 && (skyscraper[i][j] != '3'))
	{
		if (skyscraper[i][j] == '0')
		{
			result = checkcolumn_for_3(skyscraper,j);
			if (result)
				count = count + result;
			else if (!result)
				(*find)++;
		}
		else if (skyscraper[i][j] > '0' && skyscraper[i][j] != '3')
			count = count + j;
		j++;
	}
	if(j == 5)
		j--;
	*p_j = j;
	return (count);
}
/*-----------------------------------------------------------------------*/
int	checkcolumn_for_3(char skyscraper[6][6], int j)
{
	int	k;

	k = 1;
	while (k < 5)
	{
		if (skyscraper[k][j] == '3')
			return (j);
		k++; 
	}
	return (0);
}
