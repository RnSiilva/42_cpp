/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:52:30 by resilva           #+#    #+#             */
/*   Updated: 2025/09/06 22:19:50 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "\t * Memory Address * \t\n" 
			<< "str: " << &str << std::endl
			<< "stringPTR: " << stringPTR << std::endl
			<< "stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "\t * Values * \t\n" 
			<< "str: " << str << std::endl
			<< "stringPTR: " << *stringPTR << std::endl
			<< "stringREF: " << stringREF << std::endl;
}
