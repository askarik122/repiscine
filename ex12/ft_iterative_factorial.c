/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 00:51:53 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 13:01:04 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int number)
{
	int product;
	int i;

	if (number >= 0)
	{
		product = 1;
		i = 0;
		while (i < number)
		{
			product = product * (i + 1);
			i++;
		}
		return (product);
	}
	else
		return (0);
}
