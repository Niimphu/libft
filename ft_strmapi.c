/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:25:42 by yiwong            #+#    #+#             */
/*   Updated: 2023/01/18 16:45:59 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*r;

	len = ft_strlen(s);
	r = ft_strdup(s);
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		r[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (r);
}
