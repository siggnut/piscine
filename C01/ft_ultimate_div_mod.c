/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyvonen <shyvonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:48:58 by shyvonen          #+#    #+#             */
/*   Updated: 2024/01/15 13:33:27 by shyvonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;
	int	temp1;
	int	temp2;

	i = *a;
	j = *b;
	temp1 = *a;
	temp2 = *b;
	*a = i / j;
	*b = i % j;
}
