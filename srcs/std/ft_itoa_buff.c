/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_buff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:12:44 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/27 14:21:38 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_itoa_buff(char *buffer, int nbr)
{
	unsigned int	nb;

	nb = (nbr < 0) ? -nbr : nbr;
	while (*buffer)
		buffer++;
	if (nbr < 0)
	{
		*buffer++ = '-';
		*buffer = '\0';
	}
	if (nb >= 10)
	{
		ft_itoa_buff(buffer, nb / 10);
		ft_itoa_buff(buffer, nb % 10);
	}
	else
	{
		*buffer++ = nb + '0';
		*buffer = '\0';
	}
}
