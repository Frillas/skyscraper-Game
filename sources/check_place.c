#include "../header/skyscraper_h.h"

int     check_place(char skyscraper[6][6])
{
	int	i;
	int	problem;

	i = 1;
	problem = 0;
	while(i < 5 && !problem)
	{
		problem = check_place_LtoR(skyscraper, i, 1);
		if(!problem)
			problem = check_place_RtoL(skyscraper, i, 4);
		if(!problem)
			problem = check_place_UtoL(skyscraper, i, 1);
		if(!problem)
			problem = check_place_LtoU(skyscraper, i, 4);
		i++;
	}
	if(!problem)
		return (0);
	return (1);
	
}
/*-----------------------------------------------------------------------*/
int	check_place_LtoR(char skyscraper[6][6], int i, int k)
{
	char	number;
	int	count;
	int	test;

	number = skyscraper[i][k];
	count = 1;
	test = skyscraper[i][0] - 48;
	while(k < 5)
        {
                if(skyscraper[i][k] > number)
                {
                        count++;
                        number = skyscraper[i][k];
                }
                k++;
        }
	if(test == count)
		return (0);
	return (1);
}
/*-----------------------------------------------------------------------*/
int	check_place_RtoL(char skyscraper[6][6], int i, int k)
{
	char	number;
	int	count;
	int	test;

	number = skyscraper[i][k];
	count = 1;
	test = skyscraper[i][5] - 48;
	while(k > 0)
        {
                if(skyscraper[i][k] > number)
                {
                        count++;
                        number = skyscraper[i][k];
                }
                k--;
        }
	if(test == count)
		return (0);
	return (1);
}
/*-----------------------------------------------------------------------*/
int     check_place_UtoL(char skyscraper[6][6], int j, int k)
{
        char    number;
        int     count;
        int     test;

        number = skyscraper[k][j];
        count = 1;
        test = skyscraper[0][j] - 48;
        while(k < 5)
        {
                if(skyscraper[k][j] > number)
                {
                        count++;
                        number = skyscraper[k][j];
                }
                k++;
        }
        if(test == count)
                return (0);
        return (1);
}
/*-----------------------------------------------------------------------*/
int     check_place_LtoU(char skyscraper[6][6], int j, int k)
{
        char    number;
        int     count;
        int     test;

        number = skyscraper[k][j];
        count = 1;
        test = skyscraper[5][j] - 48;
        while(k > 0)
        {
                if(skyscraper[k][j] > number)
                {
                        count++;
                        number = skyscraper[k][j];
                }
                k--;
        }
        if(test == count)
                return (0);
        return (1);
}
