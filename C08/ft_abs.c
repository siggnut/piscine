/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyvonen <shyvonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:37:08 by shyvonen          #+#    #+#             */
/*   Updated: 2024/01/31 16:58:31 by shyvonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int num = 10;
	int num1 = -5;
	int num2 = 0;
	printf("ABS of %d = %d\n", num, ABS(10));
	printf("ABS of %d = %d\n", num1, ABS(-5));	
	printf("ABS of %d = %d\n", num2, ABS(0));
}
