/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:32:13 by yiwong            #+#    #+#             */
/*   Updated: 2023/01/18 13:06:51 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_rev(char *r, int sign, int j)
{
	int		i;
	char	x;

	i = 0;
	if (sign == -1)
	{
		r[i] = '-';
		i++;
	}
	j--;
	while (i < j)
	{
		x = r[i];
		r[i] = r[j];
		r[j] = x;
		i++;
		j--;
	}
	return (r);
}

char	*ft_itoa_gen(char *r, int n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_itoa_len(n);
	x = 1;
	while (len--)
		x *= 10;
	while (n)
	{
		r[i] = (n % 10) - '0';
		n /= 10;
		i++;
	}
	return (r);
}

int	ft_itoa_len(n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		len;
	char	*r;
	char	*t;

	if n = (-2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_itoa_len(n);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	ft_itoa_gen(r, n);
	ft_itoa_rev(r, sign, len);
	r[len] = '\0';
	return (r);
}