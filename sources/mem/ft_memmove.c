/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 23:40:57 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 04:42:05 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (n--)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
