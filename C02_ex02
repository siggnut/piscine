int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
		}
		else if (*str >= 'A' && *str <= 'Z')
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
    char str1[] = "%63";
  	int first;
	int second;
	first = ft_str_is_alpha(str);
	second = ft_str_is_alpha(str1);
	printf("%d", first);
	printf("%d", second);
}

// if string is between alphabetical letters return 1, else return 0 (any other characters) //
