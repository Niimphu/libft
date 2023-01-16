/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:32:13 by yiwong            #+#    #+#             */
/*   Updated: 2023/01/16 19:58:41 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_gen(char *r, int n, int sign)
{
	int	i;
	int	x;
	int	len;

	i = 0;
	len = ft_itoa_len(n);
	x = 1;
	while (len--)
		x *= 10;
	r[i] = (n % x) - '0';
	x /= 10;
	n /= 10;
	i++;
	while (x > 0)
	{
		r[i] = (n % x) - '0';
		n /= 10;
		x *= 10;
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
	r = malloc(sizeof(char) * len);
	if (!r)
		return (NULL);
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	r = ft_itoa_gen(r, n, sign);
	r = ft_itoa_rev();

	r[len--] = '\0';
	r[len--] = '-';
}