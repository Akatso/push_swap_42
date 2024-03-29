/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:50:12 by slepetit          #+#    #+#             */
/*   Updated: 2022/09/09 04:03:39 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_exit(void)
{
	write(2, "Error\n", 7);
	exit(2);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_onearg(char *arg, int **tab)
{
	char	**str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	ft_digit(arg);
	str = ft_split(arg, 32);
	if (!*str)
	{
		free(str);
		ft_exit();
	}
	while (*(str + i))
	{
		ft_atoi_free(*(str + i), str);
		i++;
	}
	size = ft_len(str);
	*tab = ft_check(str, 2);
	ft_free(str);
	return (size);
}

void	ft_multiarg(char **arg, int ac, int **tab)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == 0)
			ft_exit();
		ft_digit(arg[i]);
		if (ft_size(arg[i], 32) != 1)
			ft_exit();
		ft_atoi(arg[i]);
		i++;
	}
	*tab = ft_check(arg, ac);
}

int	main(int ac, char **av)
{
	int		*tab;
	int		size;
	t_stack	*a;
	t_stack	*b;

	tab = NULL;
	size = ac - 1;
	a = NULL;
	b = NULL;
	if (ac == 0)
		return (0);
	if (av[1] == 0)
		return (0);
	if (ac == 2)
		size = ft_onearg(av[1], &tab);
	else
		ft_multiarg(av + 1, ac, &tab);
	ft_fillstack(&a, size, tab);
	if (!ft_is_list_sort(&a))
		ft_parse_sort(&a, &b, size);
	free(tab);
	ft_freestack(&a, &b);
	return (0);
}
