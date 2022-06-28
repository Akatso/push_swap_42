/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:40:51 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/28 19:27:49 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_size(char **sstr)
{
	size_t	i;

	i = 0;
	while (sstr[i])
		i++;
	return (i);
}

int	*ft_check(char **sstr)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_size(sstr));
	if (!tab)
		return (NULL);
	while (sstr[i])
	{
		tab[i] = ft_atoi(sstr[i]);
		printf("%d\n", tab[i]);
		i++;
	}
	return (tab);
}
