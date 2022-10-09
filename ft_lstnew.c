/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:18:36 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/08 20:05:38 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    struct s_list *dest;

    if (!content)
        return (0);
    dest = malloc(sizeof(t_list));
    if(!dest)
        return (0);
    dest->content = content;
    dest->next = 0;
    return (dest);
}