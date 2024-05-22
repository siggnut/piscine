char    *ft_strcat(char *dest, char *src)
{
    int i; // or unsigned int
    int j;

    i = 0;
    j = 0;
    while (dest[j])
    {
        j++;
    }
    
    while (src[i] != '\0')
    {   
      dest[j] = src[i];
        j++;
        i++;
    }   
    dest[j] = '\0';
    return (dest);
}


#include <stdio.h>

int main()
{
  char src[15] = "world";
  char dest[15] = "hello";
  ft_strcat(dest, src);
  printf("%s", dest);
}
