/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:37:27 by vfedorov          #+#    #+#             */
/*   Updated: 2023/02/08 14:29:31 by vfedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*drug_s;

	if (!s)
		return (0);
	drug_s = (char *)malloc(sizeof(*s) * (len + 1));
	if (!drug_s)
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
