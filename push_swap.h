/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:55:59 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/28 19:11:47 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_stacka {
	int	arg;
	struct t_stacka *next;
	struct t_stacka *back;
}		t_stacka;

typedef struct s_stackb {
	int	arg;
	struct t_stackb *next;
	struct t_stackb *back;
}	t_stackb;
// MAIN
void    ft_free_sstr(char **sstr);
// FT_UTILS
size_t	ft_strlen(const char *s);
size_t	ft_len(const char *s, int c);
size_t  ft_strs(const char *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char    **ft_split(const char *s, char c);
// FT_UTILS2
int	ft_atoi(const char *nptr);
// FT_ERROR
int	ft_exit();
void	ft_digit(char *s);
// FT_PARSE
size_t  ft_size(char **sstr);
int     *ft_check(char **sstr);

#endif
