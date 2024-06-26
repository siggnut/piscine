char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i; //unsigned ints! not big difference but cleaner and no errors can happen
    int j;

    i = 0;
    j = 0;
   
    while (dest[j])
    {
        j++;
    }
    
    while (src[i] != '\0' && i < nb)
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
  int n = 3;
  ft_strncat(dest, src, n);
  printf("%s", dest);
}
