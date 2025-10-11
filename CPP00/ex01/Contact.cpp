/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:58:57 by resilva           #+#    #+#             */
/*   Updated: 2025/05/11 19:10:22 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_nm, std::string l_nm, std::string n_nm, std::string ph_nb, std::string d_secret){
	_firstName = f_nm;
	_lastName = l_nm;
	_nickname = n_nm;
	_phoneNumber = ph_nb;
	_darkSecret = d_secret;
}

Contact::~Contact()
{
}

std::string	_truncate(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	return (str);
}

void	Contact::displaySummary(int i)
{
	if (_firstName.size() > 0)
	{
		if (i != 1)
			std::cout << std::endl;
		std::cout << "|" << std::setw(10) << i << std::flush;
		std::cout << "|" << std::setw(10) << _truncate(_firstName) << std::flush;
		std::cout << "|" << std::setw(10) << _truncate(_lastName) << std::flush;
		std::cout << "|" << std::setw(10) << _truncate(_nickname) << std::flush;
		std::cout << "|" << std::flush;
	}
}

void	Contact::displayContact(void)
{
	std::cout << std::endl;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << std::flush << _lastName << std::endl;
	std::cout << "Nickname: " << std::flush << _nickname << std::endl;
	std::cout << "Phone number: " << std::flush << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << std::flush << _darkSecret << std::endl << std::endl;
	std::cout << "--- PRESS ENTER TO CONTINUE ---" << std::endl;
	std::cin.ignore();
}
