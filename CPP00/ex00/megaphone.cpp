/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:10:33 by resilva           #+#    #+#             */
/*   Updated: 2025/02/16 18:14:33 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * ";
	else
	{
		for (int j = 1; j < ac; j++)
		{
			i = -1;
			while (av[j][++i])
 				std::cout << (char)std::toupper(av[j][i]);
		}
	}
	std::cout<< std::endl;
}
