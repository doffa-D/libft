/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:38:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/06 19:56:24 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **dst;
    const char *tmp_s;
    int  i;
    int  j;
    i = 0;
    j = 0;

    s = ft_strtrim(s,&c);
    printf("%s\n",s);
    if(s == 0)
        return 0;
    while(s[i])
    {   if(s[i] == c)
            j++;
        i++;
    }
    printf("%i",j);
    dst = (char **)malloc(sizeof(char) * (j + 1));
    if(dst == 0)
        return 0;
    tmp_s = s;
    while(*tmp_s != 0)
    {
        while(*s != c)
            s++;
        tmp_s = s;
        while (*tmp_s && *tmp_s != c)
            ++tmp_s;
        if(*tmp_s == c && s < tmp_s)
        {
            *dst = ft_substr(s,0,tmp_s - s);
            s = tmp_s;
            dst++;
        }
    }
    *dst = 0;
    return dst;
 
}

int                main(void)
{
    char    **tab;
    unsigned int    i;

    i = 0;
    tab = ft_split(", h e l l o ", ' ');
    if (tab[0] == 0)
        printf("ok\n");
    while (tab[i] != NULL)
    {
        printf("%s",tab[i]);
        i++;
    }
}