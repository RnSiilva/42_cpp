/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:32:05 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 23:35:28 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
WrongCat::WrongCat( void )
{
	std::cout << "WrongCat default constructor called." << std::endl;
	_type = "default WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal( copy )
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
WrongCat& WrongCat::operator=( const WrongCat &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// -------------------------- GET AND SET FUNCTIONS ---------------------------
std::string	WrongCat::getType( void ) const { return(this->_type); }
void		WrongCat::setType( const std::string type) { this->_type = type; }

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	WrongCat::makeSound ( void ) const
{
	std::cout << "WrongAnimal sound." << std::endl;
}