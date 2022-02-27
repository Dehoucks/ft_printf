/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:28:52 by robindehouc       #+#    #+#             */
/*   Updated: 2022/02/27 19:39:40 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_symbol(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 's')
		counter += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		counter += ft_print_ptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		counter += ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		counter += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		counter += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		counter += ft_printpercent();
	else if (c == 'c')
		counter += ft_printchar(va_arg(args, int));
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int		counter;
	int		i;
	va_list	args;

	va_start(args, s);
	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			counter += check_symbol(s[i + 1], args);
			i++;
		}
		else
			counter += ft_printchar(s[i]);
		i++;
	}
	va_end(args);
	return (counter);
}

// int main()
// {
// 	ft_printf("%s", "testboy");
// }