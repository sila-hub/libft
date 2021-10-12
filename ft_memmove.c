/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:05:00 by slafdili          #+#    #+#             */
/*   Updated: 2021/03/10 10:58:20 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < (s + len) && s < d)
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
