/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhashir <mhashir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:14:45 by mhashir           #+#    #+#             */
/*   Updated: 2023/09/04 03:33:43 by mhashir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char) c;
	while (*s != '\0' && *s != ch)
	{
		s++;
	}
	if (*s == ch)
	{
		return ((char *)s);
	}
	return (0);
}
