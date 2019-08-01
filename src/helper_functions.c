/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moverton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:11:46 by moverton          #+#    #+#             */
/*   Updated: 2019/07/31 20:44:15 by kpastukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

/*
** ┌────────────────────────────────────────────────┐
** │     write single character to stdout           │
** └────────────────────────────────────────────────┘
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** ┌────────────────────────────────────────────────┐
** │          reset three given values              │
** └────────────────────────────────────────────────┘
*/

void 	ft_zero_vars3(int *i, int *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
}

/*
** ┌────────────────────────────────────────────────┐
** │            reset two given values              │
** └────────────────────────────────────────────────┘
*/

void 	ft_zero_vars2(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

/*
** ┌────────────────────────────────────────────────┐
** │       convert string of numbers to int         │
** └────────────────────────────────────────────────┘
*/

int		ft_atoi(char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*str <= 32 || *str == 127)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -sign;
			str++;
		}
		else
			str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (num * sign);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
