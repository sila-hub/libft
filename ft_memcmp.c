/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:36:49 by slafdili          #+#    #+#             */
/*   Updated: 2021/03/10 14:22:36 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*A;
	unsigned char	*B;

	A = (unsigned char *)s1;
	B = (unsigned char *)s2;
	while (n)
	{
		if (*A != *B)
			return (*A - *B);
		A++;
		B++;
		n--;
	}
	return (0);
}
