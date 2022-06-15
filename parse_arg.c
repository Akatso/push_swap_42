/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 01:18:15 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/15 03:13:04 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_space_neg(char *stack)
{
	int	i;

	i = 0;
	if (stack[i] == 32 && stack[i + 1] == 32)
		ft_error();
	else if (stack[i] == '-' && (stack[i + 1] == '-' || stack[i] == ' '))
		ft_error();
	return (1);
}

int	ft_check(char *stack)
{
	int	i;

	i = 0;
	if (stack[i] == 32)
		ft_error();
	while (stack[i])
	{
		if (stack[i] == 32 || stack[i] == '-')
		{
			ft_space_neg(&(stack[i]));
			i++;
		}
		else if (stack[i] < '0' || stack[i] > '9')
			ft_error();
		i++;
	}
	if (stack[i - 1] == 32)
		ft_error();
	return (1);
}
