#include "ft_printf.h"

char	*ft_strzero(char *str, int i)
{
	while (str[i])
	{
		str[i] = '0';
		i++;
	}
	return (str);
}

char 	*ft_round(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i] != '9' && str[i + 1] == '9')
		{
			str[i] += 1;
			str = ft_strzero(str, i + 1);
			break;
		}
		i--;
	}

	return (str);
}

void print_f2(t_env *env, char *str1, char *str2, int size)
{
	ft_putstr(str1);
	ft_putchar('.');
	ft_putstr(str2);
	free(str1);
	free(str2);
}

void print_f(t_env *e, void *data, char *str, va_list *ap, int size)
{
	void *nb;
	int *res;

	nb = va_arg(*ap, void *);
	*res = (int*)nb;
	*res = 1223;
	/*double nb;
	double nb2;
	int res1;
	int res2;

	if (e->precision)
		size = e->precision;
	else
		size = 6;
	res1 = (int) nb;
	nb2 = nb - res1;
	nb2 *= ft_pow(10, size - 1);
	res2 = (int) nb2;
	str = ft_itoa_base(res2, 10);
//	if (ft_numberlen(res2) != 6)
//		str = ft_round(str);
	print_f2(e, ft_itoa_base(res1, 10), str, size);*/
}