/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:12:37 by slepetit          #+#    #+#             */
/*   Updated: 2022/09/06 20:36:08 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ra(t_stack **lst)
{
	t_stack	*tmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	tmp = (*lst);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = malloc(sizeof(t_stack));
	tmp->next->next = NULL;
	tmp->next->prev = (tmp);
	tmp->next->data = (*lst)->data;
	tmp->next->pos = (*lst)->pos;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	free(tmp);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **lst)
{
	t_stack	*tmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	tmp = (*lst);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = malloc(sizeof(t_stack));
	tmp->next->next = NULL;
	tmp->next->prev = (tmp);
	tmp->next->data = (*lst)->data;
	tmp->next->pos = (*lst)->pos;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	free(tmp);
	write(1, "rb\n", 3);
}
