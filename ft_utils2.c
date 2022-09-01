/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:57:04 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/16 06:57:09 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_digit(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] != '-' && s[i] != 32))
			ft_exit();
		if (s[i] == '-')
			if (s[i + 1] < '0' || s[i + 1] > '9')
				ft_exit();
		i++;
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	long int	neg;
	long int	nb;

	neg = 1;
	nb = 0;
	while (*nptr && (*nptr == '\r' || *nptr == '\f' || *nptr == '\v'
			|| *nptr == '\n' || *nptr == ' ' || *nptr == '\t'))
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		nb = (nb * 10) + *(nptr++) - 48;
		if ((((nb * neg) > INT_MAX) || (nb * neg) < INT_MIN))
			ft_exit();
	}
	return (nb * neg);
}

int	ft_atoi_free(const char *nptr, char **str)
{
	long int	neg;
	long int	nb;

	neg = 1;
	nb = 0;
	while (*nptr && (*nptr == '\r' || *nptr == '\f' || *nptr == '\v'
			|| *nptr == '\n' || *nptr == ' ' || *nptr == '\t'))
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		nb = (nb * 10) + *(nptr++) - 48;
		if ((((nb * neg) > INT_MAX) || (nb * neg) < INT_MIN))
		{
			ft_free(str);
			ft_exit();
		}
	}
	return (1);
}
