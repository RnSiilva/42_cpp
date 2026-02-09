/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:52:56 by resilva           #+#    #+#             */
/*   Updated: 2026/02/02 20:43:47 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cstddef>

template<typename T, typename F>
void	iter(T *array, size_t lenght, F func)
{
	if (!array)
		return ;
	for (size_t i = 0; i < lenght; i++)
		func(array[i]);
}

template<typename T, typename F>
void	iter(const T *array, size_t lenght, F func)
{
	if (!array)
		return ;
	for (size_t i = 0; i < lenght; i++)
		func(array[i]);
}
