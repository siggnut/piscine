int	ft_str_is_uppercase(char *str)

{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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

int    main()
{
    char str[] = "lol";
    char str1[] = "Lol";
  	int first;
	int second;
	first = ft_str_is_uppercase(str);
	second = ft_str_is_uppercase(str1);
	printf("%d", first);
	printf("%d", second);
}
