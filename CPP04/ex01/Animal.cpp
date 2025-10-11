/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:08:38 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 23:34:27 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
	_type = "default";
}

// Animal::Animal( std::string type )
// {
// 	std::cout << "Animal with parameter constructor called." << std::endl;
// 	this->_type = type;
// }

Animal::Animal( const Animal &copy )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
Animal&	Animal::operator=( const Animal &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// -------------------------- GET AND SET FUNCTIONS ---------------------------
std::string	Animal::getType( void ) const { return (this->_type); }
void		Animal::setType( const std::string type )  { this->_type = type; }

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	Animal::makeSound( void ) const
{
	std::cout << "Undefined animal sound" <<	std::endl;
}

//
// std::ostream	&operator<<( std::ostream &out, const Animal &animal )
// {
// 	out << "Animal type: " << animal.getType();
// 	return (out);
// }
