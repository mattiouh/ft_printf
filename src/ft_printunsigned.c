/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpalombi <mpalombi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:50:28 by mpalombi          #+#    #+#             */
/*   Updated: 2023/02/06 11:50:28 by mpalombi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
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
