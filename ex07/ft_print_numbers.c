/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:51:18 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/08 14:46:14 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	first;

	first = '0';
	while (first <= '9')
	{
		ft_putchar(first);
		first++;
	}
}
/*
int main (void)
{
	ft_print_numbers();
	return (0);
}*/
