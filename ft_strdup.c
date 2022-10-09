/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:01:37 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/09 16:16:36 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s;
	char	*b;

	s = ft_strlen(s1);
	i = 0;
	b = malloc(sizeof(char ) * (s + 1));
	if(!b)
		return (0);
	while (s1[i] != 0)
	{
		b[i] = s1[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
