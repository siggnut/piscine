int ft_sqrt(int nb)
{
    int test_number;
    long long int temp;
    
    test_number = 2;
    temp = 2; //bc 0 & 1 done for
    if (nb == 0 || nb == 1)
    {
        return (nb);
    }
    while (temp <= nb)
    {
        temp = (long long int)test_number * test_number; //cast prevents overflow
        if (temp == nb)
        { 
            return (test_number);
        }
       test_number++;
    }
    return (0); //else if?
}
     
#include <stdio.h>

int main()
{
    int nb = 2147395600; // == 46340
    printf("%d", ft_sqrt(nb));

}
