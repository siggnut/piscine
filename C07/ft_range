
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	size = max - min;
	range = (int *)malloc(sizeof(*range) * size);
	if (!range)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

#include <stdio.h>
int main()
{
    int min = -2147483648;
    int max = -5;
    int i = 0;
    int *range = ft_range(min, max);
    while (i < max - min)
    {
        printf("%d ", range[i]);
        i++;
    }
   // free(range);
    return 0;
}
