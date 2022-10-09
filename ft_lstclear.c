/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:03:34 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/09 17:18:27 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;
    ptr = *lst;
    if(!del || !ptr)
        return ;
    while(!ptr)
    {
        (*del)(ptr->content);
        free(ptr);

    }
    *lst = 0;
}