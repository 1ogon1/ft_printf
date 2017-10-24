#include "libft.h"

int 	ft_numberlen(int nb)
{
	int i;

	i = 0;
	while (nb /= 10)
		i++;
	i++;
	return (i);
}