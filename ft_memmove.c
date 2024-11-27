/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:32:04 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/24 16:46:03 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (!ptrd && !ptrs)
		return (NULL);
	if (ptrs < ptrd)
	{
		ptrd += n - 1;
		ptrs += n - 1;
		while (n)
		{
			*ptrd = *ptrs;
			ptrd--;
			ptrs--;
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
