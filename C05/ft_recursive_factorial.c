int ft_recursive_factorial(int nb)
{
    if (nb == 0)
    {
        return (1);
    }
    if (nb < 0) //if not valid return 0 needs to be added
    {
        return (0);
    }
    return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int main ()
{
    int nb = 5;
    printf("%d\n", ft_recursive_factorial(nb));
}
