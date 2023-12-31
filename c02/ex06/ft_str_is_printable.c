/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:41:39 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/02 10:57:47 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (31 < str[i])
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[5] = {10, 3, 'a', 'A', 'Z'};
	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("Testing za"));
	return (0);
}
*/
