/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:59:05 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/03 15:40:33 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	char a;

	a = 48;
	while (a <= 57)
	{
		ft_putchar(a);
		a++;
	}
}
