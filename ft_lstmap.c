/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:24:50 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/10 17:12:52 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *tmp;
    t_list *dst;
    while(lst)
    {
        
    }

}

/*t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *w;
    t_list    *cache;

    if (!lst || !f || !del)
        return (0);
    w = NULL;
    while (lst)
    {
        cache = ft_lstnew(f(lst->content));
        if (!cache)
        {
            ft_lstclear(&w, del);
            return (0);
        }
        lst = lst->next;
        ft_lstadd_back(&w, cache);
    }
    return (w);
}*/