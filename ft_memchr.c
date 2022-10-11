/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:30:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2022/10/10 20:02:42 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void	*mb, int sc, size_t size )
{
	size_t		i;
	char		*b;

	b = (char *)mb;
	i = 0;
	while (i < size)
	{
		if (b[i] == (unsigned char)sc)
			return ((void *) &b[i]);
		i++;
	}
	return (0);
}
