/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:00:04 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/07 11:00:05 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 2 && nb < 13)
	{
		temp = ft_recursive_factorial(nb - 1);
	}
	else
		return (0);
	return (nb * temp);
}
