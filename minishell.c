/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itjimene <itjimene@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:00:04 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/12 17:07:45 by itjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void main()
{
	printf("Hello World\n");
}