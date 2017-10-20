#include "ft_printf.h"

void		ft_check_color(t_env *e, char **format)
{
	(*format)++;
	while (**format)
	{
		if (**format == 'r')
		{
			e->color = 1;
			(*format) += 4;
			break ;
		}
		else if (**format == 'g')
		{
			e->color = 2;
			(*format) += 6;
			break ;
		}
		else if (**format == 'b')
		{
			e->color = 3;
			(*format) += 5;
			break ;
		}
		else if (**format == 'e')
		{
			e->color = 0;
			(*format) += 4;
			break ;
		}
	}
}