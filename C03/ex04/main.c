#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	for (int i = 0; i < 24; i++)
	{
		char test[25] = "angelica oliveira miranda";
		printf("%s\n", ft_strstr(test, &test[i]));
		printf("%s\n", strstr(test, &test[i]));
	}
}
