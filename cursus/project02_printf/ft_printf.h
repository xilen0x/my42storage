/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:42:56 by castorga          #+#    #+#             */
/*   Updated: 2023/06/19 10:42:59 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

// Protoypes

void	ft_putcharacter_len(char character, int *len);
void	ft_string(char *args, int *len);
void	ft_number(int number, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char x_or_x);
void	ft_unsigned_int(unsigned int u, int *len);
void	ft_pointer(size_t pointer, int *len);
int		ft_printf(char const *str, ...);

#endif
