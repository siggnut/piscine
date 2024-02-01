/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyvonen <shyvonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:32:25 by shyvonen          #+#    #+#             */
/*   Updated: 2024/01/31 16:06:10 by shyvonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

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

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    unsigned char *p1;
    unsigned char *p2;
    p1 = (unsigned char *) s1;
    p2 = (unsigned char *) s2;
    while (p1[i] != '\0' || p2[i] != '\0')
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
int	main(void)
{
	char c = 'a';
	ft_putchar(c);
	c = 'b';
	ft_putchar(c);
	printf("\n");
	int a = 2;
	int b = 1;
	printf("Before swap: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
	char *str = "Hello";
	char *str2 = "Hellp";
	ft_putstr(str);
	printf("\n");
	printf("Length of string: %d\n", ft_strlen(str));
	printf("Result of string compare: %d\n", ft_strcmp(str, str2));

}
