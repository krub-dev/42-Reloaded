/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 02:00:44 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/15 03:19:17 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
		{
			j++;
		}
		i++;
	}
	return (j);
}
/*
int	ft_div(char *cascii)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (cascii[i] != '\0')
	{
		res += cascii[i];
		i++;
	}
	return (res/res);
}
int	main(void)
{
	char *tab[] = {"HOLA", "ACHO", "RED", NULL};
	int count = ft_count_if(tab, *ft_div);
	printf("Número de elementos que cumplen la condición: %d\n", count);
	return (0);
}*/
