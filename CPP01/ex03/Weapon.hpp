/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:23:34 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 12:05:26 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iomanip>
#include <iostream>

class Weapon {
	public:
		Weapon( std::string type );
		~Weapon();

		const std::string	&getType() const;
		void	setType( std::string newType );
	
	private:
		std::string _type;
};

#endif