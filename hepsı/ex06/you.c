#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (b == 1)
	{
		if (str[a] != '\0')
		{
			a++;
		}
		else
		{
			b = 2;
		}
	}
	return (a);
}

int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
