/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:32:03 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 22:01:45 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	_type = "default wrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
WrongAnimal& WrongAnimal::operator=( const WrongAnimal &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// -------------------------- GET AND SET FUNCTIONS ---------------------------
std::string	WrongAnimal::getType( void ) const { return(this->_type); }
void		WrongAnimal::setType( const std::string type) { this->_type = type; }

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	WrongAnimal::makeSound ( void ) const
{
	std::cout << "WrongAnimal: undefined sound." << std::endl;
}