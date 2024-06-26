#include <stdlib.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (!dest)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}

#include <stdio.h>
int main() 
{
    char *src = "Hello, world!";
    char *duplicate;

    duplicate = ft_strdup(src);
    printf("Original: %s\n", src);
    printf("Duplicate: %s\n", duplicate);

}
