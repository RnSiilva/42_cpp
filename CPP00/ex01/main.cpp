/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:17:10 by resilva           #+#    #+#             */
/*   Updated: 2025/05/25 21:41:55 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (42)
	{
		header();
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		 	exit(0);
		format_input(input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			exit (0);
		else
		{
			std::cout << "Invalid command. Please insert a valid command!" << std::endl;
			sleep(2);
		}
		system("clear");
	}
}