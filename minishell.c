/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:00:04 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/12 17:05:05 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (0);
}

void main()
{
	char *str = "Hello World";
	printf("string: %s\n", str);
	printf("string length: %d\n", ft_putstr(str));
}