/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:48:32 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/13 16:17:32 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arrint;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arrint = malloc(sizeof(int) * (max - min));
	if (arrint == NULL)
	{
		return (NULL);
	}
	while (i < max - min)
	{
		arrint[i] = min + i;
		i++;
	}
	return (arrint);
}
/*
int	main(void)
{
		
	ft_range(2, 8);
	return (0);
}*/
