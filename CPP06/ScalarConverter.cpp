/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:34:43 by resilva           #+#    #+#             */
/*   Updated: 2026/01/23 05:05:33 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { return (void)other, *this; }

ScalarConverter::~ScalarConverter() {}

static bool isChar(const std::string &input)
{
	return (input.length() == 1 
			&& !std::isdigit(input[0]) 
			&& std::isprint(input[0]));
}

static bool isInt(const std::string &input)
{
	char *end;
	errno = 0;
	long value = std::strtol(input.c_str(), &end, 10);
	return (*end == '\0' \
			&& errno != ERANGE \
			&& value >= std::numeric_limits<int>::min() \
			&& value <= std::numeric_limits<int>::max());
}

static bool isFloat(const std::string &input)
{
	if (input.length() > 1 && input[input.length()-1] == 'f')
	{
		char *end;
		errno = 0;
		std::strtof(input.c_str(), &end);
		return (*(end) == 'f' && *(end+1) == '\0' \
				&& errno != ERANGE);
	}
	return false;
}

static bool isDouble(const std::string &input)
{
	char *end;
	errno = 0;
	double value = std::strtod(input.c_str(), &end);
	return (*end == '\0' \
			&& errno != ERANGE \
			&& value >= std::numeric_limits<double>::min() \
			&& value <= std::numeric_limits<double>::max());
}

static bool isPseudoLiteral(const std::string &input)
{
	return (input == "nanf" || input == "nan" || input == "inff" \
		|| input == "inf" || input == "+inff" || input == "+inf" \
		|| input == "-inff" || input == "-inf");
}

static t_types getType(const std::string &input)
{
	if (isPseudoLiteral(input)) return PSEUDO_LITERAL;
	else if (isChar(input)) return CHAR;
	else if (isInt(input)) return INT;
	else if (isFloat(input)) return FLOAT;
	else if (isDouble(input)) return DOUBLE;
	else return ERR;
}
void printOutput(int c, int i, float f, double d)
{
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	else if ((c >= 0 && c < 32) || c == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;


	std::cout << "int: " << i << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;

	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(const std::string &input)
{
	switch(getType(input))
	{
		case CHAR:
		{
			char c = input[0];
			printOutput(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
			// char c = input[0];
			// std::cout << "char: '" << c << "'" << std::endl;
			// std::cout << "int: " << static_cast<int>(c) << std::endl;
			// std::cout << std::fixed << std::setprecision(1);
			// std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
			// std::cout << "double: " << static_cast<double>(c) << std::endl;
			return ;
		}
		case INT: 
		{
			int i = std::atoi(input.c_str());
			printOutput(i, i, static_cast<float>(i), static_cast<double>(i));
			// if (i >= 32 && i <= 126)
			// 	std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
			// if ((i >= 0 && i < 32) || i == 127)
			// 	std::cout << "char: Non displayable" << std::endl;
			// else
			// 	std::cout << "char: impossible" << std::endl;
			// std::cout << "int: " << i << std::endl;
			// std::cout << std::fixed << std::setprecision(1);
			// std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
			// std::cout << "double: " << static_cast<double>(i) << std::endl;
			return ;
		}
		case FLOAT:
		{
			float f = std::strtof(input.c_str(), NULL);
			printOutput(static_cast<int>(f), static_cast<int>(f), f, static_cast<double>(f));
			// if (f >= 32 && f <= 126)
			// 	std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
			// else if ((f >= 0 && f < 32) || f == 127)
			// 	std::cout << "char: Non displayable" << std::endl; 
			// else
			// 	std::cout << "char: impossible" << std::endl;
			
			// if (std::isnan(f) || std::isinf(f))
			// 	std::cout << "int: impossible" << std::endl;
			// else
			// 	std::cout << "int: " << static_cast<int>(f) << std::endl;
			
			// std::cout << std::fixed << std::setprecision(1);
			// std::cout << "float: " << f << "f" << std::endl;
			// std::cout << "double: " << static_cast<double>(f) << std::endl;
			return ;
		}
		case DOUBLE: 
		{
			double d = std::strtod(input.c_str(), NULL);
			printOutput(static_cast<int>(d), static_cast<int>(d), static_cast<float>(d), d);
			return ;
		}
		case PSEUDO_LITERAL: 
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (input == "nan" || input == "nanf") {
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
			else {
				if (input[0] == '-') {
					std::cout << "float: " << "-inff" << std::endl;
					std::cout << "double: " << "-inf" << std::endl;
				}
				else {
					std::cout << "float: " << "inff" << std::endl;
					std::cout << "double: " << "inf" << std::endl;
				}
			}
			return ;
		}
		case ERR:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
}