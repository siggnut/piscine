int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>

int  main()
{
  char str[] = "lol!";
  char str1[] = "9089";
 	int first;
	int second;
	first = ft_str_is_numeric(str);
	second = ft_str_is_numeric(str1);
	printf("%d", first);
	printf("%d", second);
}
