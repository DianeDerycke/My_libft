/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 08:35:48 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 01:44:07 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	//char *res1;
	//char *res2;
	int		i;

	i = 0;

	printf("%s\n","----------------STRSTR---------------" );
	if (ft_strstr("ABCD", "ABC") == strstr("ABCD", "ABC"))
		printf("%s\n", "TEST 1 GOOD :D") && i++;
	else
		printf("%s\n","TEST 1 FAIL :(");

	if (ft_strstr("", "ABC") == strstr("", "ABC"))
		printf("%s\n", "TEST 2 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 2 FAIL :(");

	if (ft_strstr("ABCD", "") == strstr("ABCD", ""))
		printf("%s\n", "TEST 3 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 3 FAIL :(");

	if (ft_strstr("", "") == strstr("", ""))
		printf("%s\n", "TEST 4 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 4 FAIL :(");

	if (ft_strstr("AAABBBCCCDDD", "ABC") == strstr("AAABBBCCCDDD", "ABC"))
		printf("%s\n", "TEST 5 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 5 FAIL :(");

	if (ft_strstr("ABCDDCDDDCC", "DCC") == strstr("ABCDDCDDDCC", "DCC"))
		printf("%s\n", "TEST 6 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 6 FAIL :(");

	if (ft_strstr("ABAABC","A") == strstr("ABAABC","A"))
		printf("%s\n", "TEST 7 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 7 FAIL :(");

	if (ft_strstr("ABAABC","") == strstr("ABAABC",""))
		printf("%s\n", "TEST 8 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 8 FAIL :(");

	if (ft_strstr("","A") == strstr("","A"))
		printf("%s\n", "TEST 9 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 9 FAIL :(");
	
	if (ft_strstr("ABACACBCC","CC") == strstr("ABACACBCC","CC"))
		printf("%s\n", "TEST 10 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 10 FAIL :(");

	if (ft_strstr("Hellow World Hello","Hello") == ft_strstr("Hellow World Hello","Hello"))
		printf("%s\n", "TEST 11 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 11 FAIL :(");

	if (i == 11)
		printf("%s\n","****** STRSTR GOOD :D !!!!! ******" );
	else
		printf("%s\n","STRSTR FAIL :( :( :(" );

	printf("%s\n","-------------------------------------" );
	printf("%s\n","*************************************" );


	printf("%s\n","----------------PUTNBR---------------" );
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(12345);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-20000);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf("%s\n","-------------------------------------" );
	printf("%s\n","*************************************" );


	char	*null_string;
	char	dst[3];
	char	dst1[1];
	char	dst2[12];
	char	dst3[1];

	null_string = NULL;
	i = 0;
	printf("%s\n","----------------STRCPY---------------" );
	if (ft_strcpy(dst, "YO") == strcpy(dst, "YO"))
		printf("%s\n", "TEST 1 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 1 FAIL :(");

	if (ft_strcpy(dst1, "") == strcpy(dst1, ""))
		printf("%s\n", "TEST 2 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 2 FAIL :(");

	if (ft_strcpy(dst2, "HELLO WORLD") == strcpy(dst2, "HELLO WORLD"))
		printf("%s\n", "TEST 3 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 3 FAIL :(");

	printf("%s\n","NULL STRING TEST");
	printf("%s\n",ft_strcpy(dst3, null_string));

	if (i == 3)
		printf("%s\n","****** STRCPY GOOD :D !!!!! ******" );
	else
		printf("%s\n","STRCPY FAIL :( :( :(" );

	printf("%s\n","-------------------------------------" );
	printf("%s\n","*************************************" );

	char	dest[2];
	char	dest1[6];
	char	dest2[1];
	char	dest3[16];
	i = 0;
	printf("%s\n","----------------STRNCPY--------------" );
	if (ft_strncpy(dest, "YO", 1) == strncpy(dest, "YO", 1))
		printf("%s\n", "TEST 1 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 1 FAIL :(");
	if ( ft_strncpy(dest1, "HELLO WORLD", 5) == strncpy(dest1, "HELLO WORLD", 5))
		printf("%s\n", "TEST 2 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 2 FAIL :(");
	if (ft_strncpy(dest2, "", 1) == strncpy(dest2, "", 1))
		printf("%s\n", "TEST 3 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 3 FAIL :(");

	if (ft_strncpy(dest3, "     /", 15) == strncpy(dest3, "     /", 15) )
		printf("%s\n", "TEST 4 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 4 FAIL :(");
	if (i == 4)
		printf("%s\n","****** STRNCPY GOOD :D !!!!! ******" );
	else
		printf("%s\n","STRNCPY FAIL :( :( :(" );
	printf("%s\n","-------------------------------------" );
	printf("%s\n","*************************************" );
	printf("%s\n","----------------STRDUP---------------" );

	char	*test;
	char	*test1;

	test = ft_strdup("HELLO WORLD");
	test1 = strdup("HELLO WORLD");
	//if (ft_strdup("HELLO WORLD") == strdup("HELLO WORLD"))
	null_string = NULL;
	i = 0;
	printf("%s\n","----------------STRDUP---------------" );
	if (test == test1)
		printf("%s\n", "TEST 1 GOOD :D")&& i++;
	else
	{
		printf("%s\n","TEST 1 FAIL :(");
		printf("%s%lu\n","LEN TEST =", strlen(strdup("HELLO WORLD")));
		printf("%s%lu\n","LEN TEST =", strlen(ft_strdup("HELLO WORLD")));
		printf("%s%s","REAL STRDUP = ",strdup("HELLO WORLD"));
		//printf("%s%s","MY STRDUP = ",ft_strdup("HELLO WORLD"));
	}
	/*if (ft_strdup("") == strdup(""))
		printf("%s\n", "TEST 2 GOOD :D")&& i++;
	else
		printf("\n%s\n","TEST 2 FAIL :(");
	if (ft_strdup("skjg kadfvk jdnkvj dnkfv") == strdup("skjg kadfvk jdnkvj dnkfv"))
		printf("%s\n", "TEST 3 GOOD :D")&& i++;
	else
		printf("%s\n","TEST 3 FAIL :(");
	if (i == 3)
		printf("%s\n","****** STRDUP GOOD :D !!!!! ******" );
	else
		printf("%s\n","****** STRDUP FAIL :( :( :( ******" );

	printf("%s\n","NULL STRING TEST");
	printf("%s\n",ft_strdup(null_string));
	printf("%s\n",ft_strdup("a"));
	printf("%s\n","-------------------------------------" );
	printf("%s\n","*************************************" );


*/
	return(0);
}