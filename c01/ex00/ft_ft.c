/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:43:32 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/26 15:29:55 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>
int main()
{
	int v = 3;
	int *p;

	p = &v;
	ft_ft(p);
	printf("%i", v);
	return (0);
}
*/
