/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:29:20 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/02 13:31:34 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	ft_rra(t_stack **lst)
{
	t_stack	*tmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	tmp = (*lst);
	while (tmp->next != NULL)
		tmp = tmp->next;
	(*lst)->prev = malloc(sizeof(t_stack));
	(*lst)->prev->prev = NULL;
	(*lst)->prev->data = tmp->data;
	(*lst)->prev->pos = tmp->pos;
	(*lst)->prev->next = (*lst);
	(*lst) = (*lst)->prev;
	tmp->prev->next = NULL;
	free(tmp);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **lst)
{
	t_stack	*tmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	tmp = (*lst);
	while (tmp->next != NULL)
		tmp = tmp->next;
	(*lst)->prev = malloc(sizeof(t_stack));
	(*lst)->prev->prev = NULL;
	(*lst)->prev->data = tmp->data;
	(*lst)->prev->pos = tmp->pos;
	(*lst)->prev->next = (*lst);
	(*lst) = (*lst)->prev;
	tmp->prev->next = NULL;
	free(tmp);
	write(1, "rrb\n", 4);
}
