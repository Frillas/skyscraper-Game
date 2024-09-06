#include "../header/skyscraper_h.h"

int	check_one_column(int columns, char skyscraper[6][6])
{
        int	i;
        int	j;
        int	problem;

        i = 1;
        problem = 0;
        while (i <= 4)
        {
                if (skyscraper[i][columns] == '0')
                        return (1);
                j = i + 1;
                while (j <= 4 && (skyscraper[i][columns] != '0' && skyscraper[j][columns] != '0'))
                {
                        if (skyscraper[i][columns]  == skyscraper[j][columns]) 
                        {                                       
                                problem = 1;
                        }
                        j++;
                }
                j = 0;
                i++;
        }
        return (problem); 
}
/*-----------------------------------------------------------------------*/
int	checkcolumns(char skyscraper[6][6])
{
        int	columns;
        int	problem;

        columns = 1;
        problem = 0;
        while (columns <= 4)
        {
                problem = check_one_column(columns, skyscraper);                 
		if (problem == 1)
                        return (problem);                
                columns++;
        }
        return (problem);
}
/*-----------------------------------------------------------------------*/
int	check_one_line(int line, char skyscraper[6][6])
{
        int i;
        int j;
        int problem;

        i = 1;
        problem = 0;
        while (i <= 4)
        {
                if (skyscraper[line][i] == '0')
                        return (1);
                j = i + 1;
                while (j < 4 && (skyscraper[line][i] != '0' && skyscraper[line][j] != '0'))
                {
                        if (skyscraper[line][i]  == skyscraper[line][j])
                        {
                                problem = 1;
                        }
                        j++;
                }
                i++;
        }
        return (problem);
}
/*-----------------------------------------------------------------------*/
int	checklines(char skyscraper[6][6])
{
        int line;
        int problem;

        line = 1;
        problem = 0;
        while (line < 4)
        {
                problem=check_one_line(line, skyscraper);
                if (problem == 1)
                        return (problem);
                line++;
        }
        return (problem);
} 
