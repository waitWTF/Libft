/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:43:38 by thandel           #+#    #+#             */
/*   Updated: 2022/10/11 15:52:29 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				ft_strlen(char *src);
int					ft_memset(int c);
int					ft_bzero(int c);
int					ft_memcpy(int c);
int					ft_memmove(int c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(char c);
char				ft_strrchr(char c);
int					ft_strncmp(char *src, char *dest, unsigned int n);
int					ft_memchr(int c);
int					ft_memcmp(int c);
char				*ft_strnstr(char src);
int					ft_atoi(int c);

#endif
