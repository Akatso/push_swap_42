/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:51:07 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/01 12:30:02 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./pushswap.h"

int	ft_bit_len(int size)
{
	int	bit;

	bit = 32;
	while (--bit >= 0)
		if ((size >> bit) & 1)
			break ;
	return (bit);
}

void	ft_radix(t_stack **a, t_stack **b, int size)
{
	int	bit_len;
	int	i;
	int	y;

	y = -1;
	i = -1;
	bit_len = ft_bit_len(size);
	while (++i <= bit_len)
	{
		while (++y < size)
		{
			if (((*a)->pos >> i) & 1)
				ft_ra(a);
			else
				ft_pb(a, b);
		}
		while ((*b) != NULL)
			ft_pa(a, b);
		if (ft_is_list_sort(a))
			break ;
		y = -1;
	}
}
