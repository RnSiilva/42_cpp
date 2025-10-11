/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:47:34 by resilva           #+#    #+#             */
/*   Updated: 2025/05/25 21:51:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	_index = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::search(void)
{
	std::string line;
	int			nbr;
	
	header_search();
	if (_index == 0)
	{
		std::cout << "No contacts added yet." << std::endl;
		std::cout << "--- Press ENTER to back ---" << std::endl;
		std::cin.ignore();
		return ;
	}
	//std::cout << CLEAR_LINE;
	std::cout << "|" << std::setw(10) << std::left << "INDEX" << std::flush
			<< "|" << std::setw(10) << std::left << "FIRST NAME" << std::flush
			<< "|" << std::setw(10) << std::left <<"LAST NAME" << std::flush
			<< "|" << std::setw(10) << std::left <<"NICKNAME" << std::flush
			<< "|\n" << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < _index; i++)
		_contact[i].displaySummary(i + 1);
	std::cout << std::endl << std::endl;
	while (42)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(0);
		format_input(line);
		if (line == "BACK")
			break ;
		std::stringstream ss(line);
		if (!(ss >> nbr) || nbr < 1 || nbr > _index)
		{
			std::cout << "Please enter a valid index or BACK to return." << std::endl;
			reset_line();
			continue ;
		}
		else
		{
			_contact[nbr - 1].displayContact();
			break ;
		}
	}
}

int	check_phone_nbr(std::string input)
{
	for (std::string::const_iterator i = input.begin(); i != input.end(); ++i)
	{
		if (input.size() < 7 || input.size() == 1)
		{
			std::cout << "Error: invalid phone number." << std::endl;
			reset_line();
			return (false);
		}
		else if ((i == input.begin() && *i == '+') || \
			(*i == '\t' || *i == ' ' || *i == '\r'))
			continue;
		else if (!std::isdigit(*i))
			{
				std::cout << "Error: invalid phone number." << std::endl;
				reset_line();
				return (false);
			}
	}
	return (true);
}

std::string	get_phone_nbr(std::string text)
{
	std::string	line;
	
	while (42)
	{
		std::cout << text;
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(0);
		size_t	start = line.find_first_not_of(" \t\r\n");
		if (start == std::string::npos)
		{
			std::cout << "Error: empty field." << std::endl;
			reset_line();
			continue;
		}
		if (!check_phone_nbr(line))
			continue;
		int	end = line.find_last_not_of(" \t\r\n");
		line = line.substr(start, end - start + 1);
		break;
	}
	return (line);
}

std::string	get_info(std::string text)
{
	std::string	line;

	while (42)
	{
		std::cout << text;
		std::getline(std::cin, line);
		if (std::cin.eof())
		 	exit(0);
		size_t	start = line.find_first_not_of(" \t\r\n");
		if (start == std::string::npos)
		{
			std::cout << "Error: empty field." << std::endl;
			reset_line();
			continue;
		}
		int	end = line.find_last_not_of(" \t\r\n");
		line = line.substr(start, end - start + 1);
		break;
	}
	return (line);
}

void	Phonebook::add()
{
	std::string	f_name, l_name, nickname, p_number, d_secret;

	header_add();
	f_name = get_info("First Name: ");
	l_name = get_info("Last Name: ");
	nickname = get_info("Nickname: ");
	p_number = get_phone_nbr("Phone number: ");
	d_secret = get_info("Darkest secret: ");
	if (_index < 8)
	{
		_contact[_index] = Contact(f_name, l_name, nickname, p_number, d_secret);
		_index++;
		std::cout << std::endl;
		std::cout << "Contact added at memory position " << _index << std::endl;
	}
	else
	{
		_index = 0;
		_contact[_index] = Contact(f_name, l_name, nickname, p_number, d_secret);
		std::cout << std::endl;
		std::cout << "Contact added at memory position " << _index + 1 << " (oldest contact overwritten)" << std::endl;
	}
	std::cout << "--- Press ENTER to continue ---" << std::endl;
	std::cin.ignore();
}
