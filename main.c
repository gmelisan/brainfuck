/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:42:14 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/13 18:20:00 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bf.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
		brainfuck(argv[1]);
	return (0);
}

void	brainfuck(char *source)
{
	int i;
	char array[ARR_SIZE];

	g_pointer = 0;
	i = 0;
	while (i < ARR_SIZE)
	{
		array[i] = 0;
		i++;
	}
	i = 0;
	main_loop(source, array);
}

void	main_loop(char *source, char *array)
{
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		if (source[i] == '>')
			inc_pointer();
		else if (source[i] == '<')
			dec_pointer();
		else if (source[i] == '+')
			inc_byte(array);
		else if (source[i] == '-')
			dec_byte(array);
		else if (source[i] == '.')
			print(array);
		else if (source[i] == '[')
			while_start(source, array, &i);
		else if (source[i] == ']')
			while_end(source, array, &i);
		i++;
	}
}
