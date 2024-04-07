/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korzecho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:10:40 by korzecho          #+#    #+#             */
/*   Updated: 2024/03/22 15:10:41 by korzecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char	*result;
	unsigned int	i;

	i = 0;
	if (!nmemb || !size || nmemb * size >= 2147483647)
		return (NULL);
	result = malloc(size * nmemb);
	if (!result)
		return (NULL);
	while (i < nmemb * size)
		result[i++] = 0;
	return (result);
}
