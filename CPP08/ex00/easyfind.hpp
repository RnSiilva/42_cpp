/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:51:21 by resilva           #+#    #+#             */
/*   Updated: 2026/02/05 01:03:39 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

// template<typename T>
// typename T::iterator	easyfind(T &container, int value)
// {
// 	typename T::iterator it;

// 	it = std::find(container.begin(), container.end(), value);
// 	if (it != container.end())
// 		std::cout << "INDEX[" << std::distance(container.begin(), it) << "] = " << std::flush;
// 	else
// 	{
// 		std::cerr << "Unable to find the value: (" << value << ")" << std::endl;
// 		throw std::runtime_error("No value it in iterator");
// 	}
// 	return (it);
// }

template<typename T>
typename T::const_iterator	easyfind(const T &container, int value)
{
	typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	else
		return (it);
}

template<typename T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	else
		return (it);
}