/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 23:42:45 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/14 23:57:37 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int tab[] = {1, 2, 3, 4};
	
	ft_foreach(tab, 30, &ft_putchar);
	return (0);
}*/
