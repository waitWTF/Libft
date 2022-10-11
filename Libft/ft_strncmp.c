/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:22:42 by thandel           #+#    #+#             */
/*   Updated: 2022/10/11 15:59:14 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *src, char *dest, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((src[x] != '\0' || dest[x] != '\0') && x < n)
	{
		if (src[x] > dest[x])
			return (1);
		else if (src[x] < dest[x])
			return (-1);
		x++;
	}
	return (0);
}

int	main(void)
{
	char sc[] = "code";
	char ds[] = "code";

	printf("%d\n", ft_strncmp(sc, ds, 3));
}