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
	void		*result;

	if (!nmemb || !size || nmemb * size >= 2147483647)
		return (NULL);
	result = (char *)malloc(size * nmemb);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}
