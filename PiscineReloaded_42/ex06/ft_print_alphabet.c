/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:00:01 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/08 14:44:32 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	first;

	first = 'a';
	while (first <= 'z')
	{
		ft_putchar(first);
		first++;
	}
}
/*
int main (void)
{
	ft_print_alphabet();
	return (0);
}*/
