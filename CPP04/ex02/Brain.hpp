/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:05:02 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 23:50:25 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	private:
		std::string	ideas[100];

	public:
		// Constructors and Destructors
		Brain( void );
		Brain( const Brain &copy );
		virtual ~Brain( void );

		// Operators
		Brain	&operator=( const Brain &other );

		// // Get/Set Functions
		std::string	getIdea( int index ) const;
		void		setIdea( int index, const std::string &idea );

};

#endif
