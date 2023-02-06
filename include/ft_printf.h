/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpalombi <mpalombi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:21:48 by mpalombi          #+#    #+#             */
/*   Updated: 2023/02/06 15:47:50 by mpalombi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printformats(va_list args, const char format);
int		ft_pntlen(uintptr_t num);
void	ft_put_pnt(uintptr_t num);
int		ft_printpnt(unsigned long long pnt);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printunsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_nbr_len(unsigned	int nbr);
void	ft_puthex(unsigned int num, const char format);
int		ft_printhex(unsigned int num, const char format);
int		ft_lenghthex(unsigned int num);
int		ft_printperc(void);
size_t	ft_size(long nbr);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);

#endif
