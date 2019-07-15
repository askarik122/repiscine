/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:15:49 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 12:59:33 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	int answer;

	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	answer = ft_recursive_factorial(n - 1) * n;
	return (answer);
}
