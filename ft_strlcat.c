/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:20:54 by thandel           #+#    #+#             */
/*   Updated: 2022/10/11 17:03:42 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *src, const char *dest, size_t size)
{
	size_t c;

	c = 0;
	if (size > 0)
	{
		while (src[c] && c < (size - 1))
		{
		}
		
	}
}

int main()
{
	printf("%s\n", ft_strlcat("this is ", "a long string", 8));
}