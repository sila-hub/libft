/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:47:21 by slafdili          #+#    #+#             */
/*   Updated: 2021/03/09 14:27:03 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
