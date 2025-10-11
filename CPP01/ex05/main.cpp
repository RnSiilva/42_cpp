/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:14:34 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 18:26:29 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	pressEnter(void)
{
	sleep(1);
	std::cout << "press ENTER to continue" << std::endl;
	std::cin.ignore();
	
}

void	header(void)
{
	std::cout << "\t **********************************" << std::endl;
	std::cout << "\t *            HARL 2.0            *" << std::endl;
	std::cout << "\t **********************************" << std::endl;
	std::cout << "We will go through all of Harl's complaints" << std::endl << std::endl;
}

int	main(void)
{
	Harl	harl;
	
	header();
	pressEnter();
	
	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	//pressEnter();
	
	
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	//pressEnter();
	
	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	//pressEnter();
	
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	//pressEnter();
	
	return (0);
}