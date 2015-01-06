/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:29:40 by yderosie          #+#    #+#             */
/*   Updated: 2014/12/28 14:15:04 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s2;

	s2 = (void *)malloc(size);
	if (s2 == NULL)
		return (NULL);
//	ft_bzero(s2, size);
	return (s2);
}
