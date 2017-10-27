#include "ft_printf.h"
#include <limits.h>
int		main(void)
{ 
	int a, aa;

	a = ft_printf("|%zi|\n", LLONG_MIN);
	aa = printf("|%zi|\n", LLONG_MIN);
	printf("%d\n%d\n", a, aa);
	return (0);
}

