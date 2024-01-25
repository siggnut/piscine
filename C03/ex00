int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    unsigned char *p1;
    unsigned char *p2;
    p1 = (unsigned char *) s1;
    p2 = (unsigned char *) s2;
    while (p1[i] != '\0' || p2[i] != '\0') //if && longer word will return 0 AKA ends sooner than it should //
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

int main() {
  char s1[] = "hellop";
  char s2[] = "hellov";
  int first;
  first = ft_strcmp(s1, s2);
  printf("%d\n", first);
  printf("%d\n", strcmp(s1, s2));
  return 0;
}
---------------------------------------------
/* int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] != '\0')
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
  char s2[] = "hewwo";
  int first;
  first = ft_strcmp(s1, s2);
  printf("%d", first);
  return 0;
} */
