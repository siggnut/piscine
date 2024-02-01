/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam_question.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyvonen <shyvonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:46:35 by shyvonen          #+#    #+#             */
/*   Updated: 2024/01/27 10:50:59 by shyvonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i = 0;
	int j = 1;

	if(argc < 2)
		write(1, "\n", 1);
	while(argv[j][i])
	{
		if(i < 0 || i != '\0')
			write(1, "   ", 3);
		if(argv[j][i])
		{
			putchar(argv[j][i]);
		}
		else
		{
			write(1, "\n", 1);
		}
		i++;
	}
	write(1, "\n", 1);

}
