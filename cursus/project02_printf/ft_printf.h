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
# include <stdio.h>
// ------------------ Prototypes ----------------------
void	ft_putchar_len(char character, int *len);
void	ft_string(char *args, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char op);
void	ft_unsigned_int(unsigned int nb, int *len);
void	ft_pointer(size_t pointer, int *len);
int		ft_printf(char const *str, ...);

#endif
