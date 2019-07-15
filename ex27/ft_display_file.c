/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:12:23 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 12:13:37 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void		ft_display_file(char *a)
{
	int		fd;
	char	c;

	fd = open(a, O_RDONLY);
	if (fd < 0)
		return ;
	else
		while (read(fd, &c, 1))
		{
			write(1, &c, 1);
		}
	close(fd);
}

int			main(int argc, char **argv)
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
		ft_display_file(argv[1]);
	return (0);
}
