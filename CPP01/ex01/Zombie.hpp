/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:41:09 by resilva           #+#    #+#             */
/*   Updated: 2025/09/04 20:32:22 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();

		void	announce();
		void	setName( std::string name );

	private:
		std::string	name;
};

Zombie	*zombieHorde( int N, std::string name );