/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:43:38 by thandel           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:56 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	ft_strlen(char *src);
int		ft_memset(int c);
int		ft_bzero(int c);
int		ft_memcpy(int c);
int		ft_memmove(int c);
char	*ft_strlcpy(char src, char dest, unsigned int c);
char	*ft_strlcat(char src, char dest, unsigned int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char c);
char	ft_strrchr(char c);
char	ft_strncmp(char src, char dest, unsigned int n);
int		ft_memchr(int c);
int		ft_memcmp(int c);
char	*ft_strnstr(char src);
int		ft_atoi(int c);

#endif
