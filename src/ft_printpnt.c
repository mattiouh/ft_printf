/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpalombi <mpalombi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:06:04 by mpalombi          #+#    #+#             */
/*   Updated: 2023/02/06 15:24:08 by mpalombi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pntlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_pnt(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_pnt(num / 16);
		ft_put_pnt(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printpnt(unsigned long long pnt)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (pnt == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_pnt(pnt);
		length += ft_pntlen(pnt);
	}
	return (length);
}
