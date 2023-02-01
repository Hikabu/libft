/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:33:01 by vfedorov          #+#    #+#             */
/*   Updated: 2023/01/31 19:20:22 by vfedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		dl1;
	int		dl2;
	char	*str;

	i = 0;
	dl1 = ft_strlen(s1);
	dl2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (dl1 + dl2 + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[dl1] = s2[i];
		i++;
		dl1++;
	}
	str[dl1] = '\0';
	return (str);
}
