/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:19:02 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:54:05 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain	*_brain;
	
	public:
		// Constructors and Destructos
		Dog( void );
		// Cat( const std::string type );
		Dog( const Dog &copy );
		virtual ~Dog( void );

		// Operators
		Dog&	operator=( const Dog &other );

		// Member functions
		void	makeSound( void ) const;

		// Get Function
		Brain	*getBrain( void ) const;
};

#endif
