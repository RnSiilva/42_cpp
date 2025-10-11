/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:21:41 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 12:08:43 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMAN_HPP

#  include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string n, Weapon &w);
		~HumanA();

		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
