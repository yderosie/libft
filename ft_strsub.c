/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:41:03 by yderosie          #+#    #+#             */
/*   Updated: 2014/12/28 14:24:07 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*s2;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s1 = (void *)s;
	s2 = (char *)malloc(sizeof(*s2) * (1 + len));
	if (s2 == NULL)
		return (NULL);
	while (len--)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	return (s2);
}
