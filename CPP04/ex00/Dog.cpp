/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:19:00 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:17:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Dog::Dog( void )
{
	std::cout << "🐶 Dog default constructor called." << std::endl;
	this->_type = "Dog"; 
}

Dog::Dog( const Dog &copy ) : Animal( copy )
{
	std::cout << "🐶 Dog copy constructor called." << std::endl;
	*this = copy;
}

Dog::~Dog( void )
{
	std::cout << "🐶 Animal " << this->_type << " was destroyed!" << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
Dog&	Dog::operator=( const Dog &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	Dog::makeSound( void ) const
{
	std::cout << "🐶 Dog: Woof!" << std::endl;
}
