/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <mbiliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:32:25 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/12/15 14:17:03 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fs;

	if (s1 != NULL && s2 != NULL)
	{
		fs = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (fs == NULL)
			return (NULL);
		ft_memcpy(fs, s1, ft_strlen(s1));
		ft_strcpy(fs + ft_strlen(s1), s2);
		return (fs);
	}
	return (NULL);
}
