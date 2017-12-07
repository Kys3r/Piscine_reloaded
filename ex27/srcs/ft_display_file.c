/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:24:53 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/07 11:25:02 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_display(int argc, char **argv)
{
	int		check;
	char	*buf;

	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
	{
		check = open(argv[1], O_RDONLY);
		while (read(check, &buf, 1))
			write(1, &buf, 1);
		close(check);
	}
}

int		main(int argc, char **argv)
{
	ft_display(argc, argv);
	return (0);
}
