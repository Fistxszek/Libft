/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korzecho <korzecho@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:19:10 by korzecho          #+#    #+#             */
/*   Updated: 2024/03/03 22:32:46 by korzecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *sml, unsigned int len)
{
	unsigned int	i;
	int				x;

	i = 0;
	if (!sml[0])
		return ((char *)big);
	while (i < len && big[i])
	{
		x = 0;
		while (i + x < len && big[i + x] == sml[x])
		{
			if (sml[x + 1] == '\0')
				return ((char *)(big + i));
			x++;
		}
		i++;
	}
	return (NULL);
}
