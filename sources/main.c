#include "../header/skyscraper_h.h"

/*-------------------------Programme principal----------------------------*/
int	main(int argc, char *argv[])
{
	char skyscraper[6][6] = {{'0','0','0','0','0','0'},
				 {'0','0','0','0','0','0'},
				 {'0','0','0','0','0','0'},
				 {'0','0','0','0','0','0'},
				 {'0','0','0','0','0','0'},
				 {'0','0','0','0','0','0'}};
	int	problem;

	problem = 0;
	if (argc == 2)
	{
		problem = check_arg(skyscraper,argv);
		if(!problem)
			init_sky(skyscraper);
	}
	else
		error();
}
/*-----------------------------------------------------------------------*/
int	check_arg(char skyscraper[6][6], char **argv)
{
	int	i;
	int	problem;

	i = 0;
	problem = 0;
	problem = nb_arg(argv); 	
	while (!problem)
	{
		problem = get_hori_numbers(skyscraper,argv,&i,0);
		problem = get_verti_numbers(skyscraper,argv,&i,0);
		break;
	}
	if (problem)
		error();
	return (problem);
}
/*-----------------------------------------------------------------------*/
int	nb_arg(char **argv)
{
	int	i;

	i = 0;
	while((argv[1][i] >= '1' && argv[1][i] <=  '4') || argv[1][i] == ' ')
	{
		i++;
		if (i > 31)
			return (1);
	}
	if(i < 31)
		return(1);
	return (0);
}

/*-----------------------------------------------------------------------*/
int	get_hori_numbers(char skyscraper[6][6], char **argv, int *i, int j)
{
	int	k;
	int	test1;
	int	test2;

	k = 1;
	while(j < 6)
	{
		while (k <= 4)
		{
			test1 = argv[1][*i] >= '1' && argv[1][*i] <= '4';
			test2 = argv[1][*i+1] == ' ';
			if (test1)
				skyscraper[j][k++] = argv[1][*i];
			if (test1 && test2)
				*i+=2;
			else 
				return (1);
		}
		k = 1;
		j+=5;
	}
	return (0);
}
/*-----------------------------------------------------------------------*/
int	get_verti_numbers(char skyscraper[6][6], char **argv, int *i, int j)
{
	int	k;
	int	test1;
	int	test2;
	
	k = 1;
	while(j < 6)
	{
		while (k <= 4)
		{
			test1 = argv[1][*i] >= '1' && argv[1][*i] <= '4';
	        	test2 = ((argv[1][*i+1] == ' ') || (argv[1][*i+1] == 0));
			if (test1)
				skyscraper[k++][j] = argv[1][*i];
			if (test1 && test2)
				*i+=2;
			else 
				return (1);
		}
		k = 1;
		j+=5;
	}
	return (0);
}
/*-----------------------------------------------------------------------*/
