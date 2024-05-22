int ft_recursive_power(int nb, int power)
{
    if(power < 0)
    {
        return(0);
    }
    if(power == 0) //&& nb == 0 result 0 why?
    {
        return(1);
    }
        return (nb * ft_recursive_power(nb, power - 1)); 
}
int main ()
{
    int nb = 5;
    int power = 2;
    printf("%d\n", ft_recursive_power(nb, power));
}
