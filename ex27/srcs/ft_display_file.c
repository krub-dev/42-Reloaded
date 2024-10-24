/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:46:11 by frubio-i          #+#    #+#             */
/*   Updated: 2024/06/16 13:24:37 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *namefile)
{
	int		file;
	char	*character;

	file = open(namefile, O_RDONLY);
	if (file < 0)
	{
		return (1);
	}
	while (read(file, &character, 1))
	{
		write(1, &character, 1);
	}
	close(file);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display(argv[1]);
	}
	return (0);
}
