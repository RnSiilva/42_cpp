/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 21:16:10 by resilva           #+#    #+#             */
/*   Updated: 2026/02/03 18:39:33 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _n;

	public:
		Array() : _array(new T[0]()), _n(0) {}

		Array(unsigned int n) : _array(new T[n]()), _n(n) {}

		Array(const Array &copy) {
			_n = copy._n;
			_array = new T[copy._n]();
			for (unsigned int i = 0; i < copy._n; i++)
				_array[i] = copy._array[i];
		}

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete [] _array;
				_n = other._n;
				_array = new T[other._n]();
				for (unsigned int i = 0; i < other._n; i++)
					_array[i] = other._array[i];
			}
			return *this;
		}
		
		~Array() { delete [] _array; }

		unsigned int size() const { return (_n); }

		T	&operator[](unsigned int index)
		{
			if (index >= _n)
				throw std::out_of_range("Array index out of bounds!");
			return (_array[index]);
		}
};