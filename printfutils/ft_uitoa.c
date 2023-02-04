/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:39:16 by marvin            #+#    #+#             */
/*   Updated: 2023/02/04 14:39:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_nbr_len(unsigned	int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		i;

	i = ft_nbr_len(n);
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (0);
	nbr[i] = '\0';
	while (n != 0)
	{
		nbr[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (nbr);
}
