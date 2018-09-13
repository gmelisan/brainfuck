/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:16:07 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/13 18:18:58 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bf.h"

int		inc_pointer(void)
{
	if (g_pointer < ARR_SIZE - 1)
	{
		g_pointer++;
		return (1);
	}
	return (0);
}

int		dec_pointer(void)
{
	if (g_pointer > 0)
	{
		g_pointer--;
		return (1);
	}
	return (0);
}

void	inc_byte(char *array)
{
	if ((int)array[g_pointer] < 255)
		array[g_pointer]++;
}

void	dec_byte(char *array)
{
	if (array[g_pointer] > 0)
		array[g_pointer]--;
}
