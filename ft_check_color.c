#include "ft_printf.h"

static void	ft_check_color_helper(t_env *e, char **format)
{
	if (**format == 'r')
	{
		e->color = 1;
		(*format) += 4;
	}
	else if (**format == 'g')
	{
		e->color = 2;
		(*format) += 6;
	}
	else if (**format == 'b')
	{
		e->color = 3;
		(*format) += 5;
	}
	else if (**format == 'e')
	{
		e->color = 0;
		(*format) += 4;
	}
}

void		ft_check_color(t_env *e, char **format)
{
	(*format)++;
	while (**format)
	{
		if (**format == 'r' || **format == 'g' || **format == 'b' || **format == 'e')
		{
			ft_check_color_helper(e, format);
			break ;
		}
		else
		{
			ft_print_color_c(e, '{');
			g_len++;
			break ;
		}
	}
}