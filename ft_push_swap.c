/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:03:51 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/28 19:11:26 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_sstr(char **sstr)
{
	int	i;

	i = 0;
	while (sstr[i])
	{
		free(sstr[i]);
		i++;
	}
	free(sstr);
}

int	main(int ac, char **av)
{
	char	**sstr;
	int	*tab;

	if (ac == 2)
	{
		ft_digit(av[1]);
		sstr = ft_split(av[1], 32);
		if (!sstr)
			return (-1);
		tab = ft_check(sstr);
		(void)tab;
		ft_free_sstr(sstr);
		return (free(tab), 0);
	}
	ft_exit();
}
