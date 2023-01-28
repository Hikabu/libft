/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:36:43 by vfedorov          #+#    #+#             */
/*   Updated: 2023/01/28 16:40:25 by vfedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*sra;

	if ((count * size) > SIZE_MAX)
		return (NULL);
	sra = malloc (count * size);
	if (sra == NULL)
		return (NULL);
	ft_memset(sra, 0, (size * count));
	return (sra);
}
