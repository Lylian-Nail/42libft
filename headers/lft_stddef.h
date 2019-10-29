/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_stddef.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:44:45 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/28 14:46:54 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_STDDEF_H

# define LFT_STDDEF_H

# define NULL		(0)

typedef enum	e_std
{
	STD_IN,
	STD_OUT,
	STD_ERR
}				t_std;

#endif