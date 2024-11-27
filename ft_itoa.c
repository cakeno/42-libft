/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:28:14 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/30 18:43:43 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = ft_numlen(n);
	num = n;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

static int	ft_numlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
