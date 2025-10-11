/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:27:09 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 12:08:53 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB 
{
	public:
		HumanB(std::string n);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &w);

	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif
