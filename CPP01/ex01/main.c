/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:06:47 by resilva           #+#    #+#             */
/*   Updated: 2025/09/04 21:15:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*stringPTR;
	unsigned int	stringREF;
	
	str = "HI THIS IS BRAIN";
	stringPTR = str;
	stringREF = &str;

	printf("str: %s\n"
			"stringPTR: %s\n"
			"stringREF: %d\n", str, stringPTR, stringREF);
}