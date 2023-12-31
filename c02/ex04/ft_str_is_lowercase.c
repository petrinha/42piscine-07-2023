/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:49:30 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/25 16:07:48 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((96 < str[i] && str [i] < 123))
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
	printf("%d", ft_str_is_lowercase("testingza"));
	printf("%d", ft_str_is_lowercase(""));
	printf("%d", ft_str_is_lowercase("Testing za"));
	printf("%d", ft_str_is_lowercase("testingza!"));
	return (0);
}
*/
