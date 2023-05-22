/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:01:43 by castorga          #+#    #+#             */
/*   Updated: 2023/05/22 16:01:46 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The malloc(), calloc(), valloc(), realloc(), and reallocf() functions allocate
     memory.  The allocated memory is aligned such that it can be used for any data
     type, including AltiVec- and SSE-related types. 

     The calloc() function contiguously allocates enough space for count objects that
     are size bytes of memory each and returns a pointer to the allocated memory.  The
     allocated memory is filled with bytes of value zero.
	
	 When extending a region allocated with calloc(3), realloc(3) does not
     guarantee that the additional memory is also zero-filled.

RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
     aligned_alloc() functions return a pointer to allocated memory.  If there is an
     error, they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"

void	*calloc(size_t count, size_t size)
{

}

/*example from chatgpt*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 5;
    int* numbers = (int*)calloc(size, sizeof(int));

    if (numbers == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    // Asignar valores a los elementos del arreglo
    for (int i = 0; i < size; i++) {
        numbers[i] = i + 1;
    }

    // Imprimir los valores asignados
    printf("Valores asignados:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Liberar la memoria asignada
    free(numbers);

    return 0;
}
