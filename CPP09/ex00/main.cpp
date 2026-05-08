/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:23:25 by resilva           #+#    #+#             */
/*   Updated: 2026/05/08 17:18:23 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("could not open file.");
		BitcoinExchange	btc("data.csv");
		btc.processInput(av[1]);
	}
	catch(std::runtime_error &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	
	return (EXIT_SUCCESS);
}