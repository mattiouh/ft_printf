/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:41:07 by marvin            #+#    #+#             */
/*   Updated: 2023/02/04 12:41:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printunsigned(unsigned int	n)
{
	int		length;
	char	*nbr;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		nbr = ft_uitoa(n);
		length += ft_printstr(nbr);
		free(nbr);
	}
	return (length);
}
