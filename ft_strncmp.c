/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:22:45 by slafdili          #+#    #+#             */
/*   Updated: 2021/03/11 21:54:48 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*S1;
	unsigned char	*S2;

	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	while ((*S1 || *S2) && n)
	{
		if (*S1 != *S2)
			return (*S1 - *S2);
		S1++;
		S2++;
		n--;
	}
	return (0);
}
