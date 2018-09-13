/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bf.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:48:55 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/13 18:06:38 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BF_H
# define BF_H

# include <unistd.h>
# define ARR_SIZE 2048

void	ft_putchar(char c);
void	brainfuck(char *source);
void	main_loop(char *source, char *array);
int		inc_pointer(void);
int		dec_pointer(void);
void	inc_byte(char *array);
void	dec_byte(char *array);
void	print(char *array);
void	while_start(char *source, char *array, int *i);
void	while_end(char *source, char *array, int *i);

int		g_pointer;

#endif
