/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 20:57:25 by resilva           #+#    #+#             */
/*   Updated: 2025/10/04 18:58:17 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

void	printHeader(const std::string &title)
{
	std::cout << "\n\033[1;36m==== " << title << " ====\033[0m\n";
}

void	testComparison(const Fixed &b, const Fixed &c)
{
	printHeader("Comparison Operators");
	std::cout << "b = " << b << ", c = " << c << std::endl << std::endl;
	std::cout << std::boolalpha;
	std::cout << "b > c = " << (b > c) << std::endl;
	std::cout << "b < c = " << (b < c) << std::endl;
	std::cout << "b >= c = " << (b >= c) << std::endl;
	std::cout << "b <= c = " << (b <= c) << std::endl;
	std::cout << "b == c = " << (b == c) << std::endl;
	std::cout << "b != c = " << (b != c) << std::endl;
	std::cout << std::noboolalpha;
}

void	testArithmetic(const Fixed &a, const Fixed &b)
{
	printHeader("Arithmetic Operators");
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
}

void	testIncrement(Fixed x) {
	printHeader("Increment / Decrement Operators");
	std::cout << "Start x = " << x << std::endl;
	std::cout << "++x = " << ++x << " (pre-increment)\n";
	std::cout << "x++ = " << x++ << " (post-increment)\n";
	std::cout << "After post, x = " << x << std::endl << std::endl;
	std::cout << "--x = " << --x << " (pre-decrement)\n";
	std::cout << "x-- = " << x-- << " (post-decrement)\n";
	std::cout << "After post, x = " << x << std::endl;
}

void	testMinMax(const Fixed &a, const Fixed &b, Fixed &c, Fixed &d)
{
	printHeader("Min/Max Functions");
	std::cout << "constant fixed-point:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl << std::endl;
	
	std::cout << "'normal' fixed-point:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << 	Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << 	Fixed::max(c, d) << std::endl;
}

// int	main(void)
// {
// 	const Fixed	a(10);
// 	const Fixed	b(42.42f);
// 	const Fixed	c(123.1f);
// 	const Fixed	d(20);

// 	Fixed e = c;
// 	Fixed f = d;
	
// 	testComparison(b, c);
// 	testArithmetic(a, b);
// 	testIncrement(d);
// 	testMinMax(a, b, e, f);
// 	return 0;
// }

int main( void ) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}