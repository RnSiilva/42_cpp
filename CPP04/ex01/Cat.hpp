/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:18:57 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:52:14 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain	*_brain;
	
	public:
		// Constructors and Destructors
		Cat( void );
		// Cat( const std::string type );
		Cat( const Cat &copy );
		virtual ~Cat( void );

		// Operators
		Cat&	operator=( const Cat &other );

		// Member functions
		void	makeSound( void ) const;

		// Get function
		Brain	*getBrain( void ) const;
};

#endif
