#include "libft.h"

int 	ft_pow(int nb, int step)
{
	while (step != 0)
	{
		nb *= 10;
		step--;
	}
	return (nb);
}