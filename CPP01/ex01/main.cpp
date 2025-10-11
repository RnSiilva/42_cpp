/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:56:35 by resilva           #+#    #+#             */
/*   Updated: 2025/09/03 22:30:19 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int	N = 5;

	Zombie	*horde = zombieHorde(N, "foo");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}