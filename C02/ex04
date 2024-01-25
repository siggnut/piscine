int	ft_str_is_lowercase(char *str)

{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
  char str1[] = "lOL";
  int first;
	int second;
	first = ft_str_is_lowercase(str);
	second = ft_str_is_lowercase(str1);
	printf("%d", first);
	printf("%d", second);
}
