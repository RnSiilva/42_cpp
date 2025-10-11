/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:21:54 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 00:58:13 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Foo;
	
	std::cout << std::endl << Foo << std::endl;
	Foo.attack("Enemy");
	std::cout << Foo << std::endl;

	Foo.takeDamage(5);
	std::cout << Foo << std::endl;
	Foo.beRepaired(3);
	std::cout << Foo << std::endl;
	Foo.takeDamage(20);
	std::cout << Foo << std::endl;
	Foo.attack("Enemy");
	Foo.beRepaired(3);
	Foo.takeDamage(5);
}