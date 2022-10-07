/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:38:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/07 19:52:20 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_alloc(const char *tmp_s,const char *s,char **dst,char c)
{
    int j;
    j = 0;
    while(*tmp_s != 0)
    {
        while(*s == c)
            s++;
        tmp_s = s;
        while (*tmp_s && *tmp_s != c)
            ++tmp_s;
        if(*tmp_s == c || s < tmp_s)
        {
            dst[j] = ft_substr(s,0,ft_strlen(s) - ft_strlen(tmp_s));
                if(dst[j] == 0)
                    return 0;
            s = tmp_s;
            j++;
        }
    }
    return dst;
}
int ft_count(char const *s, char c)
{
    int  i;
    int j;
    j = 0;
    i = 0;
    while(s[i])
    {   if(s[i] == c)
            j++;
        while(s[i] == c)
          i++;
        i++;
    }
    return j;
}
char **ft_split(char const *s, char c)
{
   char **dst;
   const char *tmp_s;
    int j;
   s = ft_strtrim(s,&c);
   tmp_s = ft_strtrim(s,&c);
    if(s == 0)
       return 0;
    j = ft_count(s,c);
    dst = (char **)ft_calloc(sizeof(char *) ,(j + 2));
    if(dst == 0)
        return 0;
    ft_alloc(tmp_s,s,dst,c);
    return dst;
}