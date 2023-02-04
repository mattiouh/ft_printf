/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:21:48 by mpalombi          #+#    #+#             */
/*   Updated: 2023/02/04 14:56:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printformats(va_list args, const char format);
int		ft_pntlen(uintptr_t num);
void	ft_put_pnt(uintptr_t num);
int		ft_printpnt(unsigned long long pnt);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printunsigned(unsigned int	n);
char	*ft_uitoa(unsigned int n);
int		ft_nbr_len(unsigned	int nbr);

#endif
