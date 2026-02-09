/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:51:24 by resilva           #+#    #+#             */
/*   Updated: 2026/02/05 01:08:05 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iterator>

void	titleHeader(const std::string& message)
{
	const short standartSize = 34;
	short messageSize = message.length();
	short spacesBefore = (standartSize - messageSize) / 2 + messageSize;
	short spacesAfter = (standartSize - messageSize) / 2 + 2 + messageSize % 2;

	std::cout << "\n************************************\n*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*\n";
	std::cout << "************************************\n" << std::endl;
}

void	pressEnter(void)
{
	std::string enter;
	std::cout << "\033[1;31m\nPress enter to continue...\033[0m";
	std::getline(std::cin, enter);
	std::cout << "\033[2J\033[1;1H";
}

template<typename T>
void	containerPrint(const T &container)
{
	typename T::const_iterator it;
	std::cout << "Print container: ";
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	testVector(void)
{
	titleHeader("Vector container");
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i * 2);

	containerPrint(vec);
	int toFind = 0;
	try
	{
		toFind = 6;
		// Test with existing value
		std::vector<int>::const_iterator it;
		it = easyfind(vec, toFind);
		std::cout << "Found: " << *it << "\n" << std::endl;

		// Test with non-exist value
		toFind = 5;
		easyfind(vec, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << '\n';
		std::cerr << "Value -> " << toFind << std::endl;
	}

	pressEnter();
}

void testList(void)
{
	titleHeader("List container");
	std::list<int> lst;
	lst.push_back(10); lst.push_back(20); lst.push_back(40);
	containerPrint(lst);
	int toFind = 0;
	try
	{
		// Test with existing value
		toFind = 20;
		std::list<int>::const_iterator it;
		it = easyfind(lst, toFind);
		std::cout << "Found: " << *it << "\n" << std::endl;

		// Test with non-exist value
		toFind = 30;
		easyfind(lst, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << '\n';
		std::cerr << "Value -> " << toFind << std::endl;
	}

	pressEnter();
}

void testDeque(void)
{
	titleHeader("Deque container");
	std::deque<int> deq(10, 42);
	
	//containerPrint(deq);
	for (size_t i = 0; i < deq.size(); i++)
		std::cout << deq[i] << " ";
	std::cout << std::endl;
	
	int toFind = 0;
	try
	{
		// Test with existing value
		toFind = 42;
		std::deque<int>::iterator it;
		it = easyfind(deq, toFind);
		std::cout << "INDEX[" << std::distance(deq.begin(), it) << "] = " << *it << "\n" << std::endl;
	
		// Test with non-exist value
		toFind = 24;
		easyfind(deq, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << '\n';
		std::cerr << "Value -> " << toFind << std::endl;
	}

	pressEnter();
}

int	main(void)
{
	std::cout << "\033[2J\033[1;1H";
	testVector();
	testList();
	testDeque();
}