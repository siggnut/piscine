int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n && s1[i] != '\0') //s1[i] can be p1[i]?
{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() 
{
  char s1[] = "hellop";
  char s2[] = "hellov";
  int first;
  int n;
  n = 3;
  first = ft_strncmp(s1, s2, n);
  printf("%d\n", first);
  printf("%d\n", strncmp(s1, s2, n));
  return 0;
}
-----------------------------------------------------
int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && s1[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>

int main() {
  char s1[] = "hello";
  char s2[] = "helwo";
  unsigned int n;
  n = 3;
  int first;
  first = ft_strncmp(s1, s2, n);
  printf("%d", first);
  return 0;
}

// compare until n amount of characters, n is 3 but computer starts counting from 0, therefore i < 0 //
