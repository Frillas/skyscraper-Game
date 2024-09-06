#include "../header/skyscraper_h.h"

void	add_number_3(char skyscraper[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	insert_3_top(skyscraper);
	insert_3_bot(skyscraper);
	insert_3_left(skyscraper);
	insert_3_right(skyscraper);
	check_3and2_verti(skyscraper);
	check_3and2_hori(skyscraper);
	add_3_1_verti(skyscraper);
	add_3_1_hori(skyscraper);
	check_1_3_verti(skyscraper);
	check_1_3_hori(skyscraper);
	while(i > 0 && j < 4)
	{	
		i = last_3(skyscraper,1,1);
		j++;
	}
}
/*-----------------------------------------------------------------------*/
void    insert_3_top(char skyscraper[6][6])
{
        int     test1;
        int     test2;
        int     test3;
        int     test4;

        test1 = skyscraper[0][1] != '2' || skyscraper[1][0] != '2';
        test2 = skyscraper[0][2] != '2';
        test3 = skyscraper[0][3] != '2';
        test4 = skyscraper[0][4] != '2' || skyscraper[1][5] != '2';

        if(!test1 && test2 && test3 && test4)
                skyscraper[1][1] = '3';
        if(!test2 && test1 && test3 && test4)
                skyscraper[1][2] = '3';
        if(!test3 && test1 && test2 && test4)
                skyscraper[1][3] = '3';
        if(!test4 && test1 && test2 && test3)
                skyscraper[1][4] = '3';
}
/*-----------------------------------------------------------------------*/
void    insert_3_bot(char skyscraper[6][6])
{
        int     test1;
        int     test2;
        int     test3;
        int     test4;

        test1 = skyscraper[5][1] != '2' || skyscraper[4][0] != '2';
        test2 = skyscraper[5][2] != '2';
        test3 = skyscraper[5][3] != '2';
        test4 = skyscraper[5][4] != '2' || skyscraper[4][5] != '2';

        if(!test1 && test2 && test3 && test4)
                skyscraper[4][1] = '3';
        if(!test2 && test1 && test3 && test4)
                skyscraper[4][2] = '3';
        if(!test3 && test1 && test2 && test4)
                skyscraper[4][3] = '3';
        if(!test4 && test1 && test2 && test3)
                skyscraper[4][4] = '3';
}
/*-----------------------------------------------------------------------*/
void    insert_3_left(char skyscraper[6][6])
{
        int     test1;
        int     test2;
        int     test3;
        int     test4;

        test1 = skyscraper[1][0] != '2' || skyscraper[0][1] != '2';
        test2 = skyscraper[2][0] != '2';
        test3 = skyscraper[3][0] != '2';
        test4 = skyscraper[4][0] != '2' || skyscraper[5][1] != '2';

        if(!test1 && test2 && test3 && test4)
                skyscraper[1][1] = '3';
        if(!test2 && test1 && test3 && test4)
                skyscraper[2][1] = '3';
        if(!test3 && test1 && test2 && test4)
                skyscraper[3][1] = '3';
        if(!test4 && test1 && test2 && test3)
                skyscraper[4][1] = '3';
}
/*-----------------------------------------------------------------------*/
void    insert_3_right(char skyscraper[6][6])
{
        int     test1;
        int     test2;
        int     test3;
        int     test4;

        test1 = skyscraper[1][5] != '2' || skyscraper[0][4] != '2';
        test2 = skyscraper[2][5] != '2';
        test3 = skyscraper[3][5] != '2';
        test4 = skyscraper[4][5] != '2' || skyscraper[5][4] != '2';

        if(!test1 && test2 && test3 && test4)
                skyscraper[1][4] = '3';
        if(!test2 && test1 && test3 && test4)
                skyscraper[2][4] = '3';
        if(!test3 && test1 && test2 && test4)
                skyscraper[3][4] = '3';
        if(!test4 && test1 && test2 && test3)
                skyscraper[4][4] = '3';
}
