/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:34:25 by slepetit          #+#    #+#             */
/*   Updated: 2022/09/06 20:37:21 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_size(const char *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || !s[i + 1])
			size++;
		i++;
	}
	return (size);
}

char	**ft_wordfree(char **tab, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return (NULL);
}

char	*ft_wordtab(const char *s, char c, char **str)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	*str = malloc(sizeof(char) * (i + 1));
	if (*str == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		*(*str + i) = s[i];
		i++;
	}
	*(*str + i) = '\0';
	return (*str);
}

int	ft_wordnbr(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i] && (s[i] == c))
		i++;
	while (s[i])
	{
		if (s[i] && (s[i] != c))
		{
			word++;
			while (s[i] && (s[i] != c))
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(*tab) * (ft_wordnbr(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s && *s != c)
		{
			if (!ft_wordtab(s, c, &tab[i++]))
				return (ft_wordfree(tab, i));
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
