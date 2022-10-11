/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:19:11 by thandel           #+#    #+#             */
/*   Updated: 2022/10/07 15:09:48 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strlen(char *src)
{
	int	c;

	c = 0;
	if (src[c] == '\0')
		return (0);
	while (src[c] != '\0')
		c++;
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("test"));
}*/