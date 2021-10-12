/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:43:34 by slafdili          #+#    #+#             */
/*   Updated: 2021/06/14 13:11:18 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	words_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*freememory(char **tab, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**creat_new_tab(char const *s, int words, char c, char **newtab)
{
	int		i;
	int		j;
	int		len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = words_len(s, c);
		newtab[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!newtab[i])
			return (freememory(newtab, i));
		j = 0;
		while (j < len)
			newtab[i][j++] = *s++;
		newtab[i][j] = '\0';
	}
	newtab[i] = NULL;
	return (newtab);
}

char	**ft_split(char	const *s, char c)
{
	char	**newtab;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	newtab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!newtab)
		return (NULL);
	newtab = creat_new_tab(s, words, c, newtab);
	return (newtab);
}
/*int 	main(void)
{
	char *str = "hello +are ++you +fine +";
	char c = '+';
	char **src = ft_split(str, c);
	int i = 0;
	int j = 0;
	while (src[i])
	{
		printf("[%d] = %s\n",i, src[i]);
		i++;
	}
	while (src[i][j])
	{
		while (src[i][j])
		{
		printf("[%d] = %c\n",j, src[i][j]);
		j++;
		}
		i++;
	}
}*/