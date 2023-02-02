/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:37:27 by vfedorov          #+#    #+#             */
/*   Updated: 2023/02/02 17:51:02 by vfedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*drug_s;

	drug_s = malloc(sizeof(char *) * (len + 1));
	if (!s && !drug_s)
		return (0);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		drug_s[i] = s[start + i];
		i++;
	}
	drug_s[i] = '\0';
	return (drug_s);
}
