#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src [index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int main() {

char src[] = "hello";
char dest[10];
int n = 10;
printf("source: %s", src);
ft_strncpy(dest, src, n);
printf("dest: %s", dest);
return 0;
}

// copy n amount of characters and if destination is longer, fill with null //
