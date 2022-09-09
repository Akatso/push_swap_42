/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:56:10 by slepetit          #+#    #+#             */
/*   Updated: 2022/09/07 00:17:34 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

int	ft_previous_sort(t_stack **lst, int size)
{
	t_stack	*tmp;
	int		pos_cmp;
	int		pow;
	int		i;

	i = size;
	pos_cmp = 0;
	tmp = *lst;
	pow = 1;
	while (--i)
		pow *= 10;
	while (--size)
	{
		if (tmp->pos > tmp->next->pos)
			pos_cmp += 1 * pow;
		if (size == 1)
		{
			if ((*lst)->pos > tmp->next->pos)
				pos_cmp += 1;
			return (pos_cmp);
		}
		pow /= 10;
		tmp = tmp->next;
	}
	return (pos_cmp);
}

void	ft_parse_sort(t_stack **a, t_stack **b, int size)
{
	if (size <= 5)
	{
		if (size == 2)
		{
			if ((*a)->pos > (*a)->next->pos)
				ft_sa(a);
		}
		if (size == 3)
			ft_sort_group_three_a(a);
		else if (size == 4)
			ft_sort_group_four(a, b);
		else if (size == 5)
			ft_sort_group_five(a, b);
	}
	else
		ft_radix(a, b, size);
}

int	ft_is_list_sort(t_stack **lst)
{
	t_stack	*tmp;

	tmp = *lst;
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
