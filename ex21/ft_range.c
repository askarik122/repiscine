/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:57:43 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 15:53:57 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *j;
	int i;

	if (min >= max)
		return (NULL);
	j = (int*)malloc(sizeof(*j) * (max - min));
	i = 0;
	while (min < max)
	{
		j[i] = min;
		i++;
		min++;
	}
	return (j);
}
