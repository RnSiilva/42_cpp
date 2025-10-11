/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:21:54 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 18:04:53 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// int	main( void )
// {
// 	ClapTrap	clap("CLAP");
// 	ScavTrap	scav("SCAV");

// 	std::cout << std::endl;

// 	clap.attack("invasors");
// 	std::cout << clap << std::endl;
// 	scav.attack("invasors");
// 	std::cout << scav << std::endl << std::endl;
	
// 	clap.takeDamage(9);
// 	std::cout << clap << std::endl;
// 	scav.takeDamage(9);
// 	std::cout << scav << std::endl << std::endl;
	
// 	clap.beRepaired(5);
// 	std::cout << clap << std::endl;
// 	scav.beRepaired(5);
// 	std::cout << scav << std::endl << std::endl;
	
// 	scav.guardGate();
// 	std::cout << scav << std::endl << std::endl;
	
// 	clap.takeDamage(100);
// 	std::cout << clap << std::endl;
// 	scav.takeDamage(100);
// 	std::cout << scav << std::endl << std::endl;
	
// 	clap.beRepaired(50);
// 	scav.beRepaired(50);
// 	clap.attack("traitors");
// 	scav.attack("traitors");
// 	return (0);
// }

int main(void)
{
	std::cout << "\n===== TESTE CLAPTRAP =====\n" << std::endl;

	ClapTrap a;                     // Default constructor
	ClapTrap b("CL4P-TP");          // Parametrizado
	ClapTrap c(b);                  // Cópia

	std::cout << "\n===== TESTE SCAVTRAP =====\n" << std::endl;

	ScavTrap s1;                    // Default constructor
	ScavTrap s2("SC4V-TP");         // Parametrizado
	ScavTrap s3(s2);                // Cópia

	std::cout << "\n===== TESTE FINALIZADO =====\n" << std::endl;
	return 0;
}