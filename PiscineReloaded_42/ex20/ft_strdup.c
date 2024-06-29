/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:37:48 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/12 17:07:21 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *src = "ACHO";
	char *dup = ft_strdup(src);
	
	printf("Duplicado: %s\n", dup);
	printf("Original: %s\n", src);
	
	free(dup);
	return (0);
}*/
