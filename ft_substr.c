/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:44:16 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/06 19:44:16 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *b;
  
  i = 0;
  if(!s)
    return 0;
  b = malloc(sizeof(char) * (len + 1));
  if(b == 0)
    return 0;
  while(i < len && start < ft_strlen(s))
  {
    b[i] = s[start];
    i++;
    start++;
  }
  b[i] = '\0';
  return (b);

}