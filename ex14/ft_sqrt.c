/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:00:23 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/07 11:00:25 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= 46342)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
