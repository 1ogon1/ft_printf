/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvorona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:21:50 by mvorona           #+#    #+#             */
/*   Updated: 2017/03/06 18:17:39 by mvorona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "libft/libft.h"
#include "ft_printf.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
/*
void	ft_test(char *str)
{
	while (*str != 5)
		str++;
}
*/

int main(void)
{
	char 	*str;
	char	chr;
	int		max = 1000;
	int a, aa;
	double f_loat;
	float f_loat_min;
	int e;
	int ee;

	e = 0;
	ee = 0;
	printf("hello%n\n", &e);
	printf("%d\n", e);
	ft_printf("Hello%f\n", &ee);
	ft_printf("%d\n", ee);

	f_loat = 123.321;
//	f_loat_min = -123.321;
/*	ft_printf("%f\n", 123.827);
	printf("%f\n\n", 123.827);
	ft_printf("%f\n", 123.494443);
	printf("%f\n\n", 123.494443);
	ft_printf("%f\n", 123.494445);
	printf("%f\n\n", 123.494445);
	ft_printf("%f\n", 123.494447);
	printf("%f\n\n", 123.494447);
	ft_printf("%f\n", 123.494449);
	printf("%f\n\n", 123.494449);

	ft_printf("%f\n", f_loat);
	printf("%f\n\n", f_loat);

	ft_printf("%f\n", 123.999);
	printf("%f\n\n", 123.999);
	ft_printf("%f\n", 123.993);
	printf("%f\n\n", 123.993);

	ft_printf("%f\n", 123.494444);
	printf("%f\n\n", 123.494444);

	ft_printf("%15.8f\n", 123.565);
	printf("%15.8f\n\n", 123.565);

	ft_printf("%f\n", 123.494);
	printf("%f\n\n", 123.494);

	ft_printf("%f\n", 123.823);
	printf("%f\n\n", 123.823);
/*
	ft_printf("|{% +d}|\n", 42);
	printf("|{% +d}|\n", 42);
	ft_printf("{%}\n");
	printf("{%}\n\n");

	ft_printf("{%s}\n", 0);
	printf("{%s}\n\n", 0);

	ft_printf("my1=|%4.3%|\n");
	printf("or1=|%4.3%|\n\n");

	ft_printf("my2=|%4%|\n");
	printf("or2=|%4%|\n\n");

	ft_printf("my3=|%.3%|\n");
	printf("or3=|%.3%|\n\n");

	ft_printf("my4=|%4.7%|\n");
	printf("or4=|%4.7%|\n\n");

//	ft_printf("{red}%d{eoc} {green}%d{eoc} {blue}%d{eoc}\n", 123, 123, 123);
//	printf("%d\n", 123);

/*
	a = ft_printf("{red}|%s|{eoc}\n", NULL);
	  aa = printf("|%s|\n", NULL);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{green}|%s|{eoc}\n", "ПрэвЭд!");
	  aa = printf("|%s|\n", "ПрэвЭд!");
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{blue}|%s|{eoc}\n","ç±³");
	aa = printf("|%s|\n","ç±³");
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{red}|%+s|{eoc}\n", "(null)");
	aa = printf("|%+s|\n", "(null)");
	printf("%d\n%d\n", a, aa);
//	TITLE("String options(field width, presicion and justification):\n");
//	{
	const char A[] = "this is tEEEEst!";
	a = ft_printf("{green}|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|{eoc}\n",A, A,A,NULL);
	aa = printf("|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|\n",A, A,A,NULL);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{blue}|%07.5s|\t|%02.5s|\t|%.10s|\t\t|%.5s|{eoc}\n",A,A,A, "");
	aa = printf("|%07.5s|\t|%02.5s|\t|%.10s|\t\t|%.5s|\n",A,A,A, "");
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{red}|%-7.5s|\t|%-2.5s|\t|%-.10s|\t\t|%-.5s|{eoc}\n",A,A,A, "");
	aa = printf("|%-7.5s|\t|%-2.5s|\t|%-.10s|\t\t|%-.5s|\n",A,A,A, "");
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{green}|%-07.5s|\t|%-02.5s|\t|%-020s|\t|%-0.5s|{eoc}\n",A,A,A, "");
	aa = printf("|%-07.5s|\t|%-02.5s|\t|%-020s|\t|%-0.5s|\n",A,A,A, "");
	printf("%d\n%d\n", a, aa);
*/

/*	ft_printf("|%.4s|\n", "42");
	printf("|%.4s|\n", "42");*/
//	chr = *ft_strchr("sSpdDioOuUxXcC", 'D');
//	printf("chr=%c\n", chr);
	str = "123456789";
//	ft_test(str);
//	str += 7;
//	printf("%5#0X\n", 13);
//	ft_printf("\n%15.20s", str, "Lucky");
//	printf("\noriginal result=% 15.20s\n", str, "Lucky");
//	ft_printf("%#33.23X\n", 16);
//	printf("%#33.23X\n", 16);
//	printf("test_dig=%# %% %%%  %% lx\n", 123);
//	printf("test_for_diD=%06 +i\n", 10);
//	printf("test_for_diD=%06- +i\n", 10);
//	printf("test_for_diD=%06.4- +i\n", 10);
/*	printf(ANSI_COLOR_GREEN "\nПОЛОЖИТЕЛЬНЫЕ ЧИСЛА" ANSI_COLOR_RESET "\n");

	printf(ANSI_COLOR_MAGENTA "---Conversion = i---" ANSI_COLOR_RESET "\n");

	a = ft_printf("{red}my1=|%06.4 +i|{eoc}\n", 10);
	aa = printf("or1=|%06.4 +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{green}my2=|%06 +i|{eoc}\n", 10);
	aa = printf("or2=|%06 +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{blue}my3=|%.4 +i|{eoc}\n", 10);
	aa = printf("or3=|%.4 +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{red}my4=|%04 +i|{eoc}\n", 10);
	aa = printf("or4=|%04 +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{green}my5={blue}|%2.6 +i|{eoc}\n", 10);
	aa = printf("or5=|%2.6 +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{blue}my6=|%020 -i|{eoc}\n", 10);
	aa = printf("or6=|%020 -i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{red}my7=|% +i|{eoc}\n", 10);
	aa = printf("or7=|% +i|\n", 10);
	printf("%d\n%d\n", a, aa);
	a = ft_printf("{green}my8=|%020 i|{eoc}\n", 10);
	aa = printf("or8=|%020 i|\n", 10);
	printf("%d\n%d\n", a, aa);
	ft_printf("{blue}my9=|%020 -i|{eoc}\n", 10);
	   printf("or9=|%020 -i|\n", 10);
	ft_printf("{red}my10=|%3+i|{eoc}\n", 0);
	   printf("or10=|%3+i|\n", 0);
	ft_printf("{green}my11=|%3i|{eoc}\n", 0);
	   printf("or11=|%3i|\n", 0);
	ft_printf("{blue}my12=|%+i|{eoc}\n", 0);
	   printf("or12=|%+i|\n", 0);
	ft_printf("{red}my13=|%3+i|{eoc}\n", 3);
	   printf("or13=|%3+i|\n", 3);
	ft_printf("{green}my13=|%3 i|{eoc}\n", 3);
	   printf("or13=|%3 i|\n", 3);


	printf(ANSI_COLOR_MAGENTA "---Conversion = d---" ANSI_COLOR_RESET "\n");

	ft_printf("{blue}my1=|%06.4 +d|{eoc}\n", 10);
	   printf("or1=|%06.4 +d|\n", 10);
	ft_printf("{red}my2=|%06 +d|{eoc}\n", 10);
	   printf("or2=|%06 +d|\n", 10);
	ft_printf("{green}my3=|%.4 +d|{eoc}\n", 10);
	   printf("or3=|%.4 +d|\n", 10);
	a = ft_printf("{blue}my4=|%04 +d|{eoc}\n", 10);
	aa = printf("or4=|%04 +d|\n", 10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my5=|%2.6 +d|\n", 10);
	aa = printf("or5=|%2.6 +d|\n", 10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my6=|%020 -d|\n", 10);
	aa = printf("or6=|%020 -d|\n", 10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my7=|% +d|\n", 10);
	aa = printf("or7=|% +d|\n", 10);
	printf("%d\n", a);
	printf("%d\n", aa);
	ft_printf("my8=|%020 d|\n", 10);
	   printf("or8=|%020 d|\n", 10);
	ft_printf("my9=|%020 -d|\n", 10);
	   printf("or9=|%020 -d|\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = D---" ANSI_COLOR_RESET "\n");

	a = ft_printf("my1=|%06.4 +D|\n", 2310);
	aa = printf("or1=|%06.4 +D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my2=|%06 +D|\n", 2310);
	aa = printf("or2=|%06 +D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my3=|%.4 +D|\n", 2310);
	aa = printf("or3=|%.4 +D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my4=|%04 +D|\n", 2310);
	aa = printf("or4=|%04 +D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my5=|%2.6 +D|\n", 2310);
	aa = printf("or5=|%2.6 +D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my6=|%020 -D|\n", 2310);
	aa = printf("or6=|%020 -D|\n", 2310);
	printf("%d\n", a);
	printf("%d\n", aa);
	ft_printf("my7=|% +D|\n", 2310);
	   printf("or7=|% +D|\n", 2310);
	ft_printf("my8=|%020 D|\n", 2310);
	   printf("or8=|%020 D|\n", 2310);
	ft_printf("my9=|%020 -D|\n", 2310);
	   printf("or9=|%020 -D|\n", 2310);

	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "ОТРИЦАТЕЛЬНЫЕ ЧИСЛА" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = i---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=|%06.4i|\n", -10);
	   printf("or1=|%06.4i|\n", -10);
	ft_printf("my2=|%6.4i|\n", -10);
	   printf("or2=|%6.4i|\n", -10);
	ft_printf("my3=|%.4i|\n", -10);
	   printf("or3=|%.4i|\n", -10);
	ft_printf("my4=|%2i|\n", -10);
	   printf("or4=|%2i|\n", -10);
	a = ft_printf("my5=|%5i|\n", -10);
	aa = printf("or5=|%5i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my6=|%0-6.4i|\n", -10);
	aa = printf("or6=|%0-6.4i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my7=|%i|\n", -10);
	aa = printf("or7=|%i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my8=|% i|\n", -10);
	aa = printf("or8=|% i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my9=|%020 i|\n", -10);
	aa = printf("or9=|%020 i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	a = ft_printf("my10=|%020- i|\n", -10);
	aa = printf("or10=|%020 -i|\n", -10);
	printf("%d\n", a);
	printf("%d\n", aa);
	ft_printf("my11=|%20.7 -i|\n", -10);
	   printf("or11=|%20.7 -i|\n", -10);
	ft_printf("my12=|%.3 -i|\n", -10);
	   printf("or12=|%.3 -i|\n", -10);
	ft_printf("my13=|%.3 -i|\n", 0);
	   printf("or13=|%.3 -i|\n", 0);
	ft_printf("my14=|%3i|\n", 0);
	   printf("or14=|%3i|\n\n", 0);

*/

/*
	a = ft_printf("{red}my=|%15.7d|{eoc}\n", 424242);
	  aa = printf("or=|%15.7d|\n", 424242);
	printf("%d\n", a);
	printf("%d\n", aa);


	a = ft_printf("{red}my=|%15.5d|{eoc}\n", -424242);
	  aa = printf("or=|%15.5d|\n", -424242);
	printf("%d\n", a);
	printf("%d\n", aa);

	printf(ANSI_COLOR_MAGENTA "---Conversion = D---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4D{eoc}\n", -10);
	printf("or1=%06.4D\n", -10);
	ft_printf("{red}my2=%6.4D{eoc}\n", -10);
	printf("or2=%6.4D\n", -10);
	ft_printf("{red}my3=%.4D{eoc}\n", -10);
	printf("or3=%.4D\n", -10);
	ft_printf("{red}my4=%2D{eoc}\n", -10);
	printf("or4=%2D\n", -10);
	ft_printf("{red}my5=%5D{eoc}\n", -10);
	printf("or5=%5D\n", -10);
	ft_printf("{red}my6=%0-6.4D{eoc}\n", -10);
	printf("or6=%0-6.4D\n", -10);
	ft_printf("{red}my7=%D{eoc}\n", -10);
	printf("or7=%D\n", -10);
	ft_printf("{red}my8=% D{eoc}\n", -10);
	printf("or8=% D\n", -10);
	ft_printf("{red}my9=%020 D{eoc}\n", -10);
	printf("or9=%020 D\n", -10);
	ft_printf("{red}my10=%020- D{eoc}\n", -10);
	printf("or10=%020 -D\n", -10);
	ft_printf("{red}my11=%20.7 -D{eoc}\n", -10);
	printf("or11=%20.7 -D\n", -10);
	ft_printf("{red}my12=%.3 -D{eoc}\n", -10);
	printf("or12=%.3 -D\n", -10);
	ft_printf("{red}my13=%.3 -D{eoc}\n", 0);
	printf("or13=%.3 -D\n", 0);



	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "ПОЛОЖИТЕЛЬНЫЕ ЧИСЛА uUoOxX" ANSI_COLOR_RESET "\n");
/*	printf(ANSI_COLOR_MAGENTA "---Conversion = u---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4u{eoc}\n", 10);
	printf("or=1%06.4u\n", 10);
	ft_printf("{red}my2=%6.4u{eoc}\n", 45);
	printf("or2=%6.4u\n", 45);
	ft_printf("{red}my3=%.4u{eoc}\n", 5410);
	printf("or3=%.4u\n", 5410);
	ft_printf("{red}my4=%2u{eoc}\n", 10);
	printf("or4=%2u\n", 10);
	ft_printf("{red}my5=%5u{eoc}\n", 0);
	printf("or5=%5u\n", 0);
	ft_printf("{red}my6=%0-6.4u{eoc}\n", 1023);
	printf("or6=%0-6.4u\n", 1023);
	ft_printf("{red}my7=%u{eoc}\n", 10);
	printf("or7=%u\n", 10);
	ft_printf("{red}my8=% u{eoc}\n", 10);
	printf("or8=% u\n", 10);
	ft_printf("{red}my9=%020 u{eoc}\n", 4310);
	printf("or9=%020 u\n", 4310);
	ft_printf("{red}my10=%020- u{eoc}\n", 10);
	printf("or10=%020 -u\n", 10);
	ft_printf("{red}my11=%20.7 -u{eoc}\n", 3000);
	printf("or11=%20.7 -u\n", 3000);
	ft_printf("{red}my12=%.3 -u{eoc}\n", 10);
	printf("or12=%.3 -u\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = U---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4U{eoc}\n", 10);
	printf("or1=%06.4U\n", 10);
	ft_printf("{red}my2=%6.4U{eoc}\n", 45);
	printf("or2=%6.4U\n", 45);
	ft_printf("{red}my3=%.4U{eoc}\n", 5410);
	printf("or3=%.4U\n", 5410);
	ft_printf("{red}my4=%2U{eoc}\n", 10);
	printf("or4=%2U\n", 10);
	ft_printf("{red}my5=%5U{eoc}\n", 0);
	printf("or5=%5U\n", 0);
	ft_printf("{red}my6=%0-6.4U{eoc}\n", 1023);
	printf("or6=%0-6.4U\n", 1023);
	ft_printf("{red}my7=%U{eoc}\n", 10);
	printf("or7=%U\n", 10);
	ft_printf("{red}my8=% U{eoc}\n", 10);
	printf("or8=% U\n", 10);
	ft_printf("{red}my9=%020 U{eoc}\n", 4310);
	printf("or9=%020 U\n", 4310);
	ft_printf("{red}my10=%020- U{eoc}\n", 10);
	printf("or10=%020 -U\n", 10);
	ft_printf("{red}my11=%20.7 -U{eoc}\n", -3000);
	printf("or11=%20.7 -U\n", -3000);
	ft_printf("{red}my12=%.3 -U{eoc}\n", 10);
	printf("or12=%.3 -U\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = x---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4x{eoc}\n", 10);
	printf("or1=%06.4x\n", 10);
	ft_printf("{red}my2=%6.4x{eoc}\n", 45);
	printf("or2=%6.4x\n", 45);
	ft_printf("{red}my3=%# .4x{eoc}\n", 5410);
	printf("or3=%# .4x\n", 5410);
	ft_printf("{red}my4=%2x{eoc}\n", 10);
	printf("or4=%2x\n", 10);
	ft_printf("{red}my5=%5#x{eoc}\n", 0);
	printf("or5=%5#x\n", 0);
	ft_printf("{red}my6=%0#-6.4x{eoc}\n", 1023);
	printf("or6=%0#-6.4x\n", 1023);
	ft_printf("{red}my7=%x{eoc}\n", 10);
	printf("or7=%x\n", 10);
	ft_printf("{red}my8=% #x{eoc}\n", 10);
	printf("or8=% #x\n", 10);
	ft_printf("{red}my9=%020 x{eoc}\n", 4310);
	printf("or9=%020 x\n", 4310);
	ft_printf("{red}my10=%020- #x{eoc}\n", 10);
	printf("or10=%020- #x\n", 10);
	ft_printf("{red}my11=%20.7 -x{eoc}\n", -3000);
	printf("or11=%20.7 -x\n", -3000);
	ft_printf("{red}my12=%.3 -x{eoc}\n", 10);
	printf("or12=%.3 -x\n", 10);
	ft_printf("{red}my13=%5#x{eoc}\n", 15);
	printf("or13=%5#x\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = X---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4X{eoc}\n", 10);
	printf("or1=%06.4X\n", 10);
	ft_printf("{red}my2=%6.4X{eoc}\n", 45);
	printf("or2=%6.4X\n", 45);
	ft_printf("{red}my3=%# .4X{eoc}\n", 5410);
	printf("or3=%# .4X\n", 5410);
	ft_printf("{red}my4=%2X{eoc}\n", 10);
	printf("or4=%2X\n", 10);
	ft_printf("{red}my5=%5#X{eoc}\n", 0);
	printf("or5=%5#X\n", 0);
	ft_printf("{red}my6=%0#-6.4X{eoc}\n", 1023);
	printf("or6=%0#-6.4X\n", 1023);
	ft_printf("{red}my7=%X{eoc}\n", 10);
	printf("or7=%X\n", 10);
	ft_printf("{red}my8=% #X{eoc}\n", 10);
	printf("my8=% #X\n", 10);
	ft_printf("{red}or9=%020 X{eoc}\n", 4310);
	printf("or9=%020 X\n", 4310);
	ft_printf("{red}my10=%020- #X{eoc}\n", 10);
	printf("or10=%020- #X\n", 10);
	ft_printf("{red}my11=%20.7 -X{eoc}\n", -3000);
	printf("or11=%20.7 -X\n", -3000);
	ft_printf("{red}my12=%.3 -X{eoc}\n", 10);
	printf("or12=%.3 -X\n", 10);
	ft_printf("{red}my13=%5#X{eoc}\n", 15);
	printf("or13=%5#X\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = o---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4o{eoc}\n", 10);
	printf("or1=%06.4o\n", 10);
	ft_printf("{red}my2=%6.4o{eoc}\n", 45);
	printf("or2=%6.4o\n", 45);
	ft_printf("{red}my3=%# .4o{eoc}\n", 5410);
	printf("or3=%# .4o\n", 5410);
	ft_printf("{red}my4=%2o{eoc}\n", 10);
	printf("or4=%2o\n", 10);
	ft_printf("{red}my5=%5#o{eoc}\n", 0);
	printf("or5=%5#o\n", 0);
	ft_printf("{red}my6=%0#-6.4o{eoc}\n", 1023);
	printf("or6=%0#-6.4o\n", 1023);
	ft_printf("{red}my7=%o{eoc}\n", 10);
	printf("or7=%o\n", 10);
	ft_printf("{red}my8=% #o{eoc}\n", 10);
	printf("or8=% #o\n", 10);
	ft_printf("{red}my9=%020 o{eoc}\n", 4310);
	printf("or9=%020 o\n", 4310);
	ft_printf("{red}my10=%020- #o{eoc}\n", 10);
	printf("or10=%020- #o\n", 10);
	ft_printf("{red}my11=%20.7 -o{eoc}\n", -3000);
	printf("or11=%20.7 -o\n", -3000);
	ft_printf("{red}my12=%.3 -o{eoc}\n", 10);
	printf("or12=%.3 -o\n", 10);
	ft_printf("{red}my13=%5#o{eoc}\n", 15);
	printf("or13=%5#o\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = O---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4O{eoc}\n", 10);
	printf("or1=%06.4O\n", 10);
	ft_printf("{red}my2=%6.4O{eoc}\n", 45);
	printf("or2=%6.4O\n", 45);
	ft_printf("{red}my3=%# .4O{eoc}\n", 5410);
	printf("or3=%# .4O\n", 5410);
	ft_printf("{red}my4=%2O{eoc}\n", 10);
	printf("or4=%2O\n", 10);
	ft_printf("{red}my5=%5#O{eoc}\n", 0);
	printf("or5=%5#O\n", 0);
/*	ft_printf("{red}my6=%0#-6.4O{eoc}\n", 1023);
	printf("or6=%0#-6.4O\n", 1023);
	ft_printf("{red}my7=%O{eoc}\n", 10);
	printf("or7=%O\n", 10);
	ft_printf("{red}my8=% #O{eoc}\n", 10);
	printf("or8=% #O\n", 10);
	ft_printf("{red}my9=%020 O{eoc}\n", 4310);
	printf("or9=%020 O\n", 4310);
	ft_printf("{red}my10=%020- #O{eoc}\n", 10);
	printf("or10=%020- #O\n", 10);
	ft_printf("{red}my11=%20.7 -O{eoc}\n", -3000);
	printf("or11=%20.7 -O\n", -3000);
	ft_printf("{red}my12=%.3 -O{eoc}\n", 10);
	printf("or12=%.3 -O\n", 10);
	ft_printf("{red}my13=%5#O{eoc}\n", 15);
	printf("or13=%5#O\n", 15);
/*
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "Pointer address" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = p---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%06.4p{eoc}\n", 10);
	printf("or1=%06.4p\n", 10);
	ft_printf("{red}my2=%6.4p{eoc}\n", 45);
	printf("or2=%6.4p\n", 45);
	ft_printf("{red}my3=%.4p{eoc}\n", 5410);
	printf("or3=%.4p\n", 5410);
	ft_printf("{red}my4=%2p{eoc}\n", 10);
	printf("or4=%2p\n", 10);
	ft_printf("{red}my5=%5p{eoc}\n", 0);
	printf("or5=%5p\n", 0);
	ft_printf("{red}my6=%0-6.4p{eoc}\n", 1023);
	printf("or6=%0-6.4p\n", 1023);
	ft_printf("{red}my7=%p{eoc}\n", 10);
	printf("or7=%p\n", 10);
	ft_printf("{red}my8=% p{eoc}\n", 10);
	printf("or8=% p\n", 10);
	ft_printf("{red}my9=%020 p{eoc}\n", 4310);
	printf("or9=%020 p\n", 4310);
	ft_printf("{red}my10=%020- p{eoc}\n", 10);
	printf("or10=%020 -p\n", 10);
	ft_printf("{red}my11=%20.7 -p{eoc}\n", 3000);
	printf("or11=%20.7 -p\n", 3000);
	ft_printf("{red}my12=%.3 -p{eoc}\n", 10);
	printf("or12=%.3 -p\n", 10);
	ft_printf("{red}my13=%.3 -p{eoc}\n", str);
	printf("or13=%.3 -p\n", str);
	ft_printf("{red}my13=%.3 -p{eoc}\n", &max);
	printf("or13=%.3 -p\n", &max);
	ft_printf("{red}my14=%2.20- p{eoc}\n", NULL);
	printf("or14=%2.20 -p\n", NULL);
	ft_printf("{red}my15=%4.0 -p{eoc}\n", NULL);
	printf("or15=%4.0 -p\n", NULL);

/*
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "CHAR OUTPUT" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = c---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=|%06.4c|{eoc}\n", 'a');
	printf("or1=|%06.4c|\n", 'a');
	ft_printf("{green}my2=|%6.4c|{eoc}\n", 'c');
	printf("or2=|%6.4c|\n", 'c');
	ft_printf("{blue}my3=|%.4c|{eoc}\n", '0');
	printf("or3=|%.4c|\n", '0');
	ft_printf("{red}my4=|%2c|{eoc}\n", 0);
	printf("or4=|%2c|\n", 0);
	printf("|  %i", ft_printf("my5=%5c", 201));
	printf("\n");
	printf("|  %i", printf("or5=%5c", 201));
	printf("\n");
	ft_printf("my6=|%0-6.4c|\n", 'c');
	printf("or6=|%0-6.4c|\n", 'c');
	ft_printf("my7=|%c|\n", 'a');
	printf("or7=|%c|\n", 'a');
	ft_printf("my8=|% c|\n", 'f');
	printf("or8=|% c|\n", 'f');
	//ft_printf("my9=|%020 c|\n", 'a');
	//printf("or9=|%020 c\n|", 'a');
	ft_printf("my10=|%020- c|\n", 'r');
	printf("or10=|%020 -c|\n", 'r');
	ft_printf("my11=|%20.7 -c|\n", 3000);
	printf("or11=|%20.7 -c|\n", 3000);
	printf("|  %i|", ft_printf("my=%5c", 3000));
	printf("\n");
	printf("|  %i|", printf("or=%5c", 3000));
	printf("\n");
	ft_printf("my12=|%.3 -c|\n", 'q');
	printf("or12=|%.3 -c|\n", 'q');

	ft_printf("my13=%.3 -c %c\n", 'q', 'q');
	printf("or13=%.3 -c %c\n", 'q', 'q');

//	ft_printf("my14=%10.3s\n", 0);// ловит сигфолт
//	printf("or14=%10.3s\n", 0);//

	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "Пропускает или нет " ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = %---" ANSI_COLOR_RESET "\n");
	ft_printf("{red}my1=%%%06.4c{eoc}\n", 'a');
	printf("or1=%%%06.4c\n", 'a');
	ft_printf("{blue}my2%%=% 6.4c{eoc}\n", 'a');
	printf("or2%%=%6.4c\n", 'a');
/*
//	printf("or2=%t\n", 'a');
//	printf("test%=% %%li\n", 130);
//	printf("testZ=% %Zli\n", 130);
	ft_printf("test_my=%010-k20k\n", 130);
	printf("test_or=%010-k20k\n", 130);

	ft_printf("test_my=% kkak\n", 130);
	printf("test_or=% kkak\n", 130);
	ft_printf("test_my=% 20kkak\n", 130);
	printf("test_or=% 20kkak\n", 130);
	ft_printf("test_my=% 020kkak\n", 130);
	printf("test_or=% 020kkak\n", 130);

/*
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "ПРОВЕРКА ИЗ МЭЙКФАЙЛА" ANSI_COLOR_RESET "\n");
	ft_printf("my%%012=%012d\n", 34567);
	printf("or%%012=%012d\n", 34567);
	ft_printf("my%%012=%012i\n", 34567);
	printf("or%%012=%012i\n", 34567);
	ft_printf("my%%012=%012D\n", 34567);
	printf("or%%012=%012D\n", 34567);
	ft_printf("my%%.0=%.0i\n", 34567);
	printf("or%%.0=%.0i\n", 34567);
	ft_printf("my%%.0=%.0i\n", NULL);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0i\n", NULL);
	ft_printf("my%%.0=%.0D\n", 0);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0D\n", 0);
	ft_printf("my%%.0=%.0O\n", 0);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0O\n", 0);
	ft_printf("%%\n");
	ft_printf("my=% d\n", 4);
	printf("or=% d\n", 4);

	ft_printf("my%%#.0=%#.0O\n", 0);
	printf("or%%#.0=%#.0O\n", 0);
	ft_printf("my%%#.=%#.O\n", 0);
	printf("or%%#.=%#.O\n", 0);
	ft_printf("my%%#.=%#.O\n", 123);
	printf("or%%#.=%#.O\n", 123);
	ft_printf("my20.8.12.-6=%20.8.12.-0# +-6i\n", 34567);
	printf("or20.8.12.-6=%20.8.12.-#0+ -6i\n", 34567);
	ft_printf("my=%#08x\n", 42);
	printf("or=%#08x\n", 42);
	ft_printf("my=%#.x %#.0x\n", 0, 0);
	printf("or=%#.x %#.0x\n", 0, 0);
	ft_printf("my=%#.X %#.0X\n", 0, 0);
	printf("or=%#.X %#.0X\n", 0, 0);
	ft_printf("my=%#.o %#.0o\n", 0, 0);
	printf("or=%#.o %#.0o\n", 0, 0);


	ft_printf("my=%ld\n", -2147483649);
	printf("or=%ld\n", -2147483649);
	ft_printf("my=%lld\n", -9223372036854775808);
	printf("or=%lld\n", -9223372036854775808);
	ft_printf("my=%d\n", -92);
	printf("or=%d\n", -92);
	ft_printf("my=%lld\n", 9223372036854775807);
	printf("or=%lld\n", 9223372036854775807);
	ft_printf("my=%ld\n", 2147483648);
	printf("or=%ld\n", 2147483648);

	ft_printf("my=%#5.d %#5.0d\n", 0, 0);
	printf("or=%#5.d %#5.0d\n", 0, 0);
	ft_printf("my=%u\n", 010);
	printf("or=%u\n", 010);
	ft_printf("%10s is a string\n", "this");
	printf("%10s is a string\n", "this");

	ft_printf("%zj", "9223372036854775807");

	ft_printf("%15.4d\n", -424242);
	printf("%15.4d\n", -424242);
	ft_printf("%.4d\n", -424242);
	printf("%.4d\n", -424242);

	ft_printf("%zu, %.0u\n", 0, 0);
	printf("%zu, %.0u\n", 0, 0);

	ft_printf("{%3c}\n", 0);
	printf("{%3c}\n", 0);
	printf("%i\n", ft_printf("%\n"));
	printf("%i\n",printf("%\n"));
	ft_printf("{%5.s}\n", 0);
	printf("{%5.s}\n", 0);
	printf("%i|", ft_printf("%s", ""));
	printf("\n");
	printf("%i|",printf("%s", ""));
	printf("\n");
	ft_printf("%C\n", 'A');

	ft_printf("{%030X}", 0xFFFF);
	printf("\n");
	printf("{%030X}", 0xFFFF);

	ft_printf("%#.3o", 1);
	printf("\n");
	printf("%#.3o", 1);
*/
//	printf("\n");
// printf("|%i", printf("|%-5.3s|", "LYDI"));

/*
	printf("\n\n");
	printf("%%-5.3s LYDI == |%-5.3s|\n%% 4.5 42 == |% 4.5i|\n%%04.5i 42 == |%04.5i|\n%%04.3i 42 == |%04.3i|\n%%04.2i 42 == |%04.2i|", "LYDI", 42, 42, 42, 42);
	printf("\n\n");
	ft_printf("%%-5.3s LYDI == |%-5.3s|\n%% 4.5 42 == |% 4.5i|\n%%04.5i 42 == |%04.5i|\n%%04.3i 42 == |%04.3i|\n%%04.2i 42 == |%04.2i|", "LYDI", 42, 42, 42, 42);
	printf("\n\n");
	ft_printf("{%#.5x}", 1);
	printf("\n");
	printf("{%#.5x}", 1);
*/

//	ft_printf("%%   %", "test");
//	printf("\n");
//	ft_printf("% ");
//	printf("\n");
//	ft_printf("% ");
//	printf("\n");
//	printf("or=% +");
//	printf("\n");
//	ft_printf("% +-");
//	printf("\n% 20-20.3l");
//	ft_printf("%%  %i", 32);
//	ft_printf("% c", 0);
//	printf("\n");
//	printf("% c", 0);
	//	ft_printf("%00-2147483648d", 34);
//	printf("%002323-2147483648d", 34);

	//	printf("\n");
//	printf("%i|", printf("%"));

	/*	ft_printf("%.0p, %.p\n", 0, 0);
	printf("%.0p, %.p\n", 0, 0);
	ft_printf("@moulitest: %s\n", NULL);
	printf("@moulitest: %s\n", NULL);
*//*	printf("testZ=%Zli\n", 130);
*///	printf("\nВЫВОД 'c'\n");
//	ft_printf("my1=%5.2c\n", 'c');
//	printf("or1=%5.2c\n", 'c');

//	printf("%#020-p\n", max);
//	printf("%#x\n", &max);
//	printf("%05c", 'a');
//	printf("\noriginal result=%6.005s\n", str);
//	printf("%3i", 59876);
//	printf("str_move=%s\n", str);
//	ft_printf("%##-+23.014-#hhhh-12 hh-.67 hhl .-0 0 00hi\n", 123);
//	printf("%##-+23.014-#-12 -.67 .-0 0 00+00O\n", 123);
//	ft_printf("%##q-+23.014-#-12 -.67 .-0 0 00+i\n", str);
//	ft_printf("%##q-+23.014-#-12hh -.67 .-0 0 00+D\n", str);
//	ft_printf("%##q-+23.014-#-12lll -hh.67jz .-0 0 00+X\n", str);
//	ft_printf("%FF3  .123456789 #s\n", str);
//	int x = 127;
//	printf("chr=%020c", 'H');
//	printf("x=%hi\n", (short int)(char)x);
//	printf("test=%i\n", test(2, "abc"));
//	printf("%0#20+X\n", 100);
//	printf("%#  %% 20  qwwli", 300);
//	ft_printf("%s\n", str);
//	printf("%-10kaka\n");
//	printf("%lll018ll09 %li\n %i",32,  3000000000, 21);
//	printf("%0q#q20sqqs\n", str);
//	printf("%h#10.5   35.5  05*.*i i2=%lzc", 20 ,10, 16, 100);*/
	return (0);
}
