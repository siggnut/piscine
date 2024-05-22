int ft_strlen(char *str)
{
  unsigned int i;
  i = 0;

  while (str[i])
  {
    i++;
    }
    return (i);
  }
  int main()
  {
    char str[] = "hello";
    ft_strlen(str);

   printf("%d", ft_strlen(str)); 
    }
