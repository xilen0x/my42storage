#include <stdio.h>

char	*str_lower_case(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		count;
	int		j;

	count = 0;
	j = 1;
	str_lower_case(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (j == 1)
				str[count] = str[count] - 32;
			    j = 0;
		}
		else if (str[count] >= '0' && str[count] <= '9')
			j = 0;
		else
			j = 1;
		count++;
	}
	return (str);
}

int	main()
{
	char message[] = "hola mundo 42 desde barcelona al mundo";
	char another_message[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
	printf("%s\n", ft_strcapitalize(message));
	printf("%s\n", ft_strcapitalize(another_message));
}

//------------------------------
//mismo comentado
#include <stdio.h> // Inclusión de la librería estándar de entrada/salida

char *str_lower_case(char *str) // Declaración de la función "str_lower_case" que convierte todas las letras en minúsculas
{
    int count; // Declaración de la variable contador "count"

    count = 0; // Inicialización de la variable "count" a cero
    while (str[count] != '\0') // Bucle "while" que itera sobre cada carácter de la cadena hasta encontrar el carácter nulo de final de cadena
    {
        if (str[count] >= 'A' && str[count] <= 'Z') // Si el carácter actual está entre 'A' y 'Z'
            str[count] += 32; // Convierte el carácter a su equivalente en minúscula en la tabla ASCII sumándole 32
        count++; // Incrementa el contador para procesar el siguiente carácter
    }
    return (str); // Retorna la cadena convertida a minúsculas
}

char *ft_strcapitalize(char *str) // Declaración de la función "ft_strcapitalize" que capitaliza la primera letra de cada palabra
{
    int count; // Declaración de la variable contador "count"
    int j; // Declaración de la variable "j" para llevar un seguimiento del primer carácter de una palabra

    count = 0; // Inicialización del contador "count" a cero
    j = 1; // Inicialización de la variable "j" a 1 para indicar que el primer carácter de la cadena es el primer carácter de una palabra
    str_lower_case(str); // Convierte todas las letras en minúsculas usando la función "str_lower_case"
    while (str[count] != '\0') // Bucle "while" que itera sobre cada carácter de la cadena hasta encontrar el carácter nulo de final de cadena
    {
        if (str[count] >= 'a' && str[count] <= 'z') // Si el carácter actual es una letra minúscula
        {
            if (j == 1) // Si el carácter actual es el primer carácter de una palabra
                str[count] -= 32; // Convierte el carácter a su equivalente en mayúscula en la tabla ASCII restando 32
            j = 0; // Establece la variable "j" en 0 para indicar que el próximo carácter no es el primer carácter de una palabra
        }
        else if (str[count] >= '0' && str[count] <= '9') // Si el carácter actual es un dígito
            j = 0; // Establece la variable "j" en 0 para indicar que el próximo carácter no es el primer carácter de una palabra
        else // Si el carácter actual no es una letra ni un dígito
            j = 1; // Establece la variable "j" en 1 para indicar que el próximo carácter es el primer carácter de una nueva palabra
        count++; // Incrementa el contador para procesar el siguiente carácter
    }
    return (str); // Retorna la cadena con la capitalización aplicada a la primera letra de cada palabra
}

int main() // Función
{
    
}