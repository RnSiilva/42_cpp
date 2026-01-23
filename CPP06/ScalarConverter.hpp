/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:34:45 by resilva           #+#    #+#             */
/*   Updated: 2026/01/22 22:03:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <cerrno>
#include <cstdlib>


typedef enum s_types {
	ERR,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_LITERAL,
}				t_types;

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
	
	public:
		static void convert(const std::string &input);
};

#endif