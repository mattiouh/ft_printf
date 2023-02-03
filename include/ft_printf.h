/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpalombi <mpalombi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:21:48 by mpalombi          #+#    #+#             */
/*   Updated: 2023/02/03 15:57:23 by mpalombi         ###   ########.fr       */
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

#endif
