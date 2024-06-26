int	ft_is_prime(int nb)
{
	int	i; //long long to handle overflow

	i = 2;
	if (nb < 0 || nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
    int nb = 38;
    int result = ft_is_prime(nb);
    printf("input %d, 0 if it's not a prime number, 1 if it is: %d\n", nb, result);
}
