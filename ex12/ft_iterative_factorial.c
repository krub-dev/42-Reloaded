/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:56:53 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/12 10:00:59 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resfact;

	resfact = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		resfact = nb * resfact;
		nb--;
	}
	return (resfact);
}
/*
int main(void)
{
//	int nb = 5;
	ft_iterative_factorial(5);
	return (0);
}*/
