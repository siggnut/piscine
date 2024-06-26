#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void    ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i])
    {
        i++;
    }
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        i;
    int        total_len;
    char    *result;

    i = 0;
    total_len = ft_strlen(sep) * (size - 1);
    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
        i++;
    }
    result = (char *)malloc(sizeof(char) * (total_len + 1));
    result[0] = '\0';
    if (!result)
    {
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i != (size - 1))
            ft_strcat(result, sep);
        i++;
    }
    return (result);
}
#include <stdio.h>
int main()
{
  int size = 3;
  char *sep = " ,";
  char *test[3];
  test[0] = "H";
  test[1] = "W";
  test[2] = "G";
  printf("%s\n", ft_strjoin(size, test, sep));
}
