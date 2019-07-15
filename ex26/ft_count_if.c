/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:53:02 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 16:02:59 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i])
		if ((*f)(tab[i++]) == 1)
			j++;
	return (j);
}