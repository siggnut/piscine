int ft_iterative_power(int nb, int power)
{
    int result;
    int i;
    
    i = 0;
    result = 1;
    if(power < 0)
    {
        return(0);
    }
    if (power == 0) // doesnt matter if (nb == 0)is included?
    {
        return(1);
    }
    while(i < power)
    {
        result *= nb;
        i++;
    }
    return (result);


}

#include <stdio.h>
int main()
{
    int nb = 5;
    int power = 2;
    printf("%d", ft_iterative_power(nb, power));
}
