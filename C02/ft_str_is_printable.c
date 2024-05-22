int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
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
  char str[] = "lol!";
  char str1[] = {'\x19'};
  int first;
	int second;
	first = ft_str_is_printable(str);
	second = ft_str_is_printable(str1);
	printf("%d", first);
	printf("%d", second);
}
