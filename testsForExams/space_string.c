#include <unistd.h>

char	rev_string(char *str)
{
	int	i;
	i = 0;
	while(str[i] !='\0')
	{
		write(1, &str[i], 1);
		write(1, "   ", 3);
		i++;
	}
	return (*str);
}

int	main(void)
{
	rev_string("abc");
	//rev_string("hola mundo");
	//rev_string(" un espacio 1");
	return (0);
}
