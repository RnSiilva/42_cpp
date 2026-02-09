/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:41:11 by resilva           #+#    #+#             */
/*   Updated: 2026/01/29 02:16:55 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	{
		std::cout << "\n--- SUBJECT TEST ---\n";
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << "\n--- VARIED TESTS ---\n";
		int a = 42, b = 24;
		double c = 10.0, d = 20.0;
		std::string s1 = "School", s2 = "FortyTwo";

		std::cout << "Values before anything:";
		std::cout << "int -> a: " << a << " | b: " << b << std::endl;
		std::cout << "double -> c: " << c << " | d: " << d << std::endl;
		std::cout << "string s1: " << s1 << " | s2: " << s2 << std::endl;
		
		std::cout << "\nTest swap template:" << std::endl;
		::swap(a, b);
		::swap(c, d);
		::swap(s1, s2);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "int -> a: " << a << " | b: " << b << std::endl;
		std::cout << "double -> c: " << c << " | d: " << d << std::endl;
		std::cout << "string s1: " << s1 << " | s2: " << s2 << std::endl;

		std::cout << "\nTest min template:" << std::endl;
		std::cout << "int -> a: " << a << " | b: " << b << " | result: " << ::min(a, b) << std::endl;
		std::cout << "double -> c: " << c << " | d: " << d << " | result: " << ::min(c, d) << std::endl;
		std::cout << "string s1: " << s1 << " | s2: " << s2 << " | result: " << ::min(s1, s2) << std::endl;

		std::cout << "\nTest max template:" << std::endl;
		std::cout << "int -> a: " << a << " | b: " << b << " | result: " << ::max(a, b) << std::endl;
		std::cout << "double -> c: " << c << " | d: " << d << " | result: " << ::max(c, d) << std::endl;
		std::cout << "string s1: " << s1 << " | s2: " << s2 << " | result: " << ::max(s1, s2) << "\n" << std::endl;
	}
	return 0;
}
	