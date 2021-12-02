/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:28:52 by robindehouc       #+#    #+#             */
/*   Updated: 2021/12/02 17:39:14 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	checkSymbol(char c, const char *s, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 's')
		counter = ft_putstr(va_arg(args, char* ));
	if (c == 'p')
		counter = ft_convert_base(va_arg(args, void* ), "0123456789ABCDEF");
	/*
	if (c == 'd')

	if (c == 'i')

	if (c == 'u')

	if (c == 'x')

	if (c == 'X')
	*/
	else
		ft_putchar(c);
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int	counter;
	int	i;
	va_list args;
	
	va_start(args, s);
	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			counter = counter + checkSymbol(s[i], s, args);
			i++;
		}
		ft_putchar(s[i]);
		i++;
	}
	
	return (counter);
}
int	main()
{

	int a;
	int *b = &a;

	ft_printf("oui %p non\n", b);
	printf("oui %p non", b);
}