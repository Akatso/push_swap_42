/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:37:18 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/28 16:35:42 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_len(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

size_t	ft_strs(const char *s, char c)
{
	size_t	i;
	size_t	strs;

	i = 0;
	strs = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || !s[i + 1])
			strs++;
		i++;
	}
	return (strs);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)s;
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * len +1);
	if (str == NULL)
		return (NULL);
	while (s[start] && len--)
		str[i++] = s[start++];
	return (str);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_strs(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j++] = ft_substr(s, i, ft_len(((char *)&s[i]), c));
			i += ft_len(((char *)&s[i]), c);
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
