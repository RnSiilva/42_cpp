/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:18:23 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 18:48:46 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		level = -1;

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <FILTER>" << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 0; i < 4; i++)
		if (av[1] == levels[i])
			level = i;
	
	while (level < 4)
	{
		switch (level)
		{
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				harl.complain("DEBUG");
				break ;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				harl.complain("INFO");
				break ;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				break ;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break ;
		}
		if (level == 3 || level == -1)
			break ;
		else
		{
			level++;
			std::cout << std::endl;
		}
	}
}