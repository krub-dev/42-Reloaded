/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:10:43 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/08 14:51:10 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
	return (0);
}*/
