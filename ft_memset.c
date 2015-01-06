/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:11:29 by yderosie          #+#    #+#             */
/*   Updated: 2014/11/19 12:08:19 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char *)b;
	while (n > 0)
	{
		s1[i] = c;
		n--;
		i++;
	}
	return (s1);
}