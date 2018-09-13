/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:27:03 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/13 18:19:34 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char *array)
{
	ft_putchar(array[g_pointer]);
}

void	while_start(char *source, char *array, int *i)
{
	int skip_count;

	skip_count = 0;
	if (array[g_pointer] == 0)
	{
		(*i)++;
		while (source[*i] != '\0')
		{
			if (source[*i] == '[')
				skip_count++;
			if (source[*i] == ']')
			{
				if (skip_count)
					skip_count--;
				else
					break;
			}
			(*i)++;
		}
	}
}

void	while_end(char *source, char *array, int *i)
{
	int skip_count;

	skip_count = 0;
	if (array[g_pointer] != 0)
	{
		(*i)--;
		while (*i != 0)
		{
			if (source[*i] == ']')
				skip_count++;
			if (source[*i] == '[')
			{
				if (skip_count)
					skip_count--;
				else
					break;
			}
			(*i)--;
		}
	}
}
