/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:19:00 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:53:45 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Dog::Dog( void )
{
	std::cout << "🐶 Dog default constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog &copy ) : Animal( copy )
{
	std::cout << "🐶 Dog copy constructor called." << std::endl;
	this->_brain = new Brain( *copy._brain );
}

Dog::~Dog( void )
{
	std::cout << "🐶 Animal " << this->_type << " was destroyed!" << std::endl;
	delete this->_brain;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
Dog&	Dog::operator=( const Dog &other )
{
	if (this != &other)
	{
		this->_type = other.getType();
		*this->_brain = *other._brain;
	}
	return (*this);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	Dog::makeSound( void ) const
{
	std::cout << "🐶 Dog: Woof!" << std::endl;
}

// ------------------------------ GET FUNCTIONS -------------------------------
Brain	*Dog::getBrain( void ) const { return (this->_brain); }