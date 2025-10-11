/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:08:38 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 22:01:16 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called." << std::endl;
	_type = "default";
}

// AAnimal::AAnimal( std::string type )
// {
// 	std::cout << "AAnimal with parameter constructor called." << std::endl;
// 	this->_type = type;
// }

AAnimal::AAnimal( const AAnimal &copy )
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
AAnimal&	AAnimal::operator=( const AAnimal &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// -------------------------- GET AND SET FUNCTIONS ---------------------------
std::string	AAnimal::getType( void ) const { return (this->_type); }
void		AAnimal::setType( const std::string type )  { this->_type = type; }

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	AAnimal::makeSound( void ) const
{
	std::cout << "Undefined AAnimal sound" <<	std::endl;
}

//
// std::ostream	&operator<<( std::ostream &out, const AAnimal &AAnimal )
// {
// 	out << "AAnimal type: " << AAnimal.getType();
// 	return (out);
// }
