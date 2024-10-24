#include "../header/skyscraper_h.h"

void	add_number_2_1(char skyscraper[6][6])
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	checkarg_2_2_verti(skyscraper,1);
	checkarg_2_2_hori(skyscraper,1);
	checkarg_2_3_verti(skyscraper,1,0,0);
	checkarg_2_3_hori(skyscraper,1,0,0);
	check_1_3_verti(skyscraper);
        check_1_3_hori(skyscraper);
	while(i > 0 && j < 10)
	{
		last_number_hori(skyscraper);
		last_number_verti(skyscraper);
		i = check_for_zero(skyscraper);
		j++;
	}
}
/*-----------------------------------------------------------------------*/
void	checkarg_2_2_verti(char skyscraper[6][6], int i)
{
	int	test1;
	int	test2;
	int	test3;

	while(i < 5)
	{
		test1 = (skyscraper[0][i] == '2' && skyscraper[5][i] == '2');
		test2 = (skyscraper[1][i] == '3' && skyscraper[2][i] == '4');
		test3 = (skyscraper[4][i] == '3' && skyscraper[3][i] == '4');
		if(test1 && test2)
		{
			skyscraper[3][i] = '1';
			skyscraper[4][i] = '2';
		}
		if(test1 && test3)
		{
			skyscraper[2][i] = '1';
			skyscraper[1][i] = '2';
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void	checkarg_2_2_hori(char skyscraper[6][6], int i)
{
	int	test1;
	int	test2;
	int	test3;

	while(i < 5)
	{
		test1 = (skyscraper[i][0] == '2' && skyscraper[i][5] == '2');
		test2 = (skyscraper[i][1] == '3' && skyscraper[i][2] == '4');
		test3 = (skyscraper[i][4] == '3' && skyscraper[i][3] == '4');
		if(test1 && test2)
		{
			skyscraper[i][3] = '1';
			skyscraper[i][4] = '2';
		}
		if(test1 && test3)
		{
			skyscraper[i][2] = '1';
			skyscraper[i][1] = '2';
		}
		i++;
	}
}
/*-----------------------------------------------------------------------*/
void    checkarg_2_3_hori(char skyscraper[6][6], int i, int test1, int test2)
{
        int     test3;
	int	test4;

        while(i < 5)
        {
                test1 = (skyscraper[i][0] == '3' && skyscraper[i][5] == '2');
		test2 = (skyscraper[i][0] == '2' && skyscraper[i][5] == '3');
                test3 = (skyscraper[i][1] == '3' && skyscraper[i][2] == '4');
                test4 = (skyscraper[i][4] == '3' && skyscraper[i][3] == '4');
                if(test2 && test3)
                {
                        skyscraper[i][4] = '1';
                        skyscraper[i][3] = '2';
                }
                if(test1 && test4)
                {
                        skyscraper[i][2] = '2';
                        skyscraper[i][1] = '1';
                }
                i++;
        }
}
/*-----------------------------------------------------------------------*/
void    checkarg_2_3_verti(char skyscraper[6][6], int i, int test1, int test2)
{
        int     test3;
        int     test4;

        while(i < 5)
        {
                test1 = (skyscraper[0][i] == '3' && skyscraper[5][i] == '2');
                test2 = (skyscraper[0][i] == '2' && skyscraper[5][i] == '3');
                test3 = (skyscraper[1][i] == '3' && skyscraper[2][i] == '4');
                test4 = (skyscraper[4][i] == '3' && skyscraper[3][i] == '4');
                if(test2 && test3)
                {
                        skyscraper[4][i] = '1';
                        skyscraper[3][i] = '2';
                }
                if(test1 && test4)
                {
                        skyscraper[2][i] = '2';
                        skyscraper[1][i] = '1';
                }
                i++;
        }
}
