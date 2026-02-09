/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 02:19:00 by resilva           #+#    #+#             */
/*   Updated: 2026/01/30 21:13:51 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElem(const T &val)
{
	std::cout << val << " ";
}

template <typename T>
void cumulativeSum(T &n)
{
	static T value = 0;

	value += n;
	n = value;
}

void	addBang(std::string &s)
{
	s = s + "!";
}

int	main(void)
{
	{
		const int a[] = { 2, 4, 6, 8 };
		size_t n = sizeof(a) / sizeof(a[0]);

		std::cout << "\n---Array of int (const) using printElem---\n";

		::iter(a, n , printElem<int>);
		std::cout << std::endl;
	}

	{
		float f[] = { 2.0f, 4.0f, 6.0f, 8.0f };
		size_t n = sizeof(f) / sizeof(f[0]);
		std::cout <<"\n---Array of floats (non-consts) using cumulativeSum---\n";
		
		::iter(f, n, cumulativeSum<float>);

		for (size_t i = 0; i < n; i++)
			std::cout << "a[" << i << "] = " << f[i] << std::endl;
	}

	{
		std::string s[] = {"Forty", "Two", "CPP" };
		size_t n = sizeof(s) / sizeof(s[0]);
		std::cout << "\n---Array of string---\n";

		::iter(s, n, addBang);
		::iter(s, n, printElem<std::string>);
		std::cout << std::endl;
	}

	return 0;
}