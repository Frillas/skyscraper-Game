#ifndef SKYSCRAPER_H
#define SKYCRAPER_H

#include <unistd.h>
#include <stdio.h>

// main.c
int	nb_arg(char **argv);
int	get_hori_numbers(char skyscraper[6][6], char **argv, int *i, int j);
int	get_verti_numbers(char skyscraper[6][6], char **argv, int *i, int j);
int	check_arg(char skyscraper[6][6], char **argv);

// tools.c
void	ft_putchar(char skyscraper[6][6]);
void	error();

//add_4.c
void    check_3and2(char skyscraper[6][6]);
void    last_4(char skyscraper[6][6], int i, int j);
void    check_2and1(char skyscraper[6][6]);
void    corner_check(char skyscraper[6][6], int i, int k);

//add_3.c
void    add_number_3(char skyscraper[6][6]);
void    insert_3_top(char skyscraper[6][6]);
void    insert_3_bot(char skyscraper[6][6]);
void    insert_3_left(char skyscraper[6][6]);
void    insert_3_right(char skyscraper[6][6]);

//add_3_next.c
void    add_3_1_verti(char skyscraper[6][6]);
void    add_3_1_hori(char skyscraper[6][6]);
int     last_3(char skyscraper[6][6], int i, int j);
int     checkline_for_3(char skyscraper[6][6], int i, int *p_j, int *find);
int     checkcolumn_for_3(char skyscraper[6][6], int j);

//add_2_1.c
void    add_number_2_1(char skyscraper[6][6]);
void    checkarg_2_2_verti(char skyscraper[6][6], int i);
void    checkarg_2_2_hori(char skyscraper[6][6], int i);
void    checkarg_2_3_hori(char skyscraper[6][6], int i, int test1, int test2);
void    checkarg_2_3_verti(char skyscraper[6][6], int i, int test1, int test2);

//add_2_1_next.c
void    check_3and2_verti(char skyscraper[6][6]);
void    check_3and2_hori(char skyscraper[6][6]);
void    check_1_3_verti(char skyscraper[6][6]);
void    check_1_3_hori(char skyscraper[6][6]);

//last_number.c
void    last_number_hori(char skyscraper[6][6]);
int     find_zero_hori(char skyscraper[6][6], int i);
int     numbers_count_hori(char skyscraper[6][6], int i);
int     check_for_zero(char skyscraper[6][6]);

//last_number_next.c
void    last_number_verti(char skyscraper[6][6]);
int     find_zero_verti(char skyscraper[6][6], int j);
int     numbers_count_verti(char skyscraper[6][6], int j);
int     cross_zero(char skyscraper[6][6]);
void    cross_include(char skyscraper[6][6]);

//check_place.c
int     check_place(char skyscraper[6][6]);
int     check_place_LtoR(char skyscraper[6][6], int i, int k);
int     check_place_RtoL(char skyscraper[6][6], int i, int k);
int     check_place_UtoL(char skyscraper[6][6], int j, int k);
int     check_place_LtoU(char skyscraper[6][6], int j, int k);

//skyscraper_init
void	init_sky(char skyscraper[6][6]);
void	add_4_hori(char skyscraper[6][6]);
void	add_4_verti(char skyscraper[6][6]);
void	add_1(char skyscraper[6][6]);
void    corner_check_1(char skyscraper[6][6]);

//check.c
int	checklines(char skyscraper[6][6]);
int	check_one_line(int line, char skyscraper[6][6]);
int     checkcolumns(char skyscraper[6][6]);
int	check_one_column(int columns, char skyscraper[6][6]);

#endif
