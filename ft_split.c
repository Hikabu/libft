/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:41:27 by vfedorov          #+#    #+#             */
/*   Updated: 2023/02/07 15:34:45 by vfedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_poscitay(char const *str, char delim)
{
	int	word_count;
	unsigned int	i;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] == delim)
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] && (str[i] != delim))
		i++;
	}
	return (word_count);
}

static char *ft_sdup(char const *s, int start, int finish)
{
	char *str;
	int		i;

	i = 0;
	str = (char *)malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		str[i++] = s[start++];
	str [i] = '\0';
	return (str);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**sst;

	sst = (char **)malloc(sizeof(char *) * (ft_poscitay(s, c)) + 1);
	i = 0;
	j = 0;
	k = -1;

	if (sst == NULL)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i ==  ft_strlen(s)) && k >= 0)
		{
			sst[j++] = ft_sdup(s, k, i);
			k = -1;
		}
		i++;
	}
	sst[j] = 0;
	return (sst);
}
