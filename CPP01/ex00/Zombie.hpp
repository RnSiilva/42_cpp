/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:54:37 by resilva           #+#    #+#             */
/*   Updated: 2025/09/02 21:21:03 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
	public:

		Zombie();
		Zombie( std::string name );
		~Zombie();

		void	announce( void );

	private:

		std::string	name;
	
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
