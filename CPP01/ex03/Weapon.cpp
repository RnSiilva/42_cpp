/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:31:49 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 12:06:50 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon( void ) {}

void	Weapon::setType( std::string newType )
{
	this->_type = newType;
}

const std::string &Weapon::getType( void ) const
{
	return (this->_type);
}