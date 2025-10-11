/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:18:57 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:11:48 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
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
};

#endif
