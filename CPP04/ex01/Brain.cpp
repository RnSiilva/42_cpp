/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:08:11 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:47:08 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain( const Brain &copy )
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called." << std::endl;	
}

//
Brain&	Brain::operator=( const Brain &other )
{
	if (this != &other)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

//
std::string	Brain::getIdea( int index ) const 
{	
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return ("");
}

void		Brain::setIdea( int index, const std::string &idea ) 
{	
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}