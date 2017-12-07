/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:59:36 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/07 10:59:39 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int temp;

	i = 2;
	temp = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 2 && nb < 13)
	{
		while (i <= nb)
		{
			temp = temp * i;
			i++;
		}
	}
	else
		return (0);
	return (temp);
}
