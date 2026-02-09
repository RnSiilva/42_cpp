/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:30:13 by resilva           #+#    #+#             */
/*   Updated: 2026/02/05 04:17:08 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _storage(), _cap(0) {}

Span::Span(unsigned int N) : _storage(), _cap(N) {}

Span::Span(const Span &copy) : _storage(copy._storage), _cap(copy._cap) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_storage = other._storage;
		_cap = other._cap;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (this->_storage.size() >= this->_cap)
		throw std::runtime_error("Maximum capacity reached");
	this->_storage.push_back(n);
}

int Span::shortestSpan()
{
	if (_storage.size() <= 1)
		throw std::runtime_error("It's necessary to have 2 or more numbers");
	std::vector<int> tmp = _storage;
	std::sort(tmp.begin(), tmp.end());
	int best = tmp[1] - tmp[0];
	for (size_t i = 1; i+1 < tmp.size(); i++)
		if ((tmp[i+1] - tmp[i]) < best)
			best = tmp[i+1] - tmp[i];
	return best;
}

int Span::longestSpan()
{
	if (_storage.size() <= 1)
		throw std::runtime_error("It's necessary to have 2 or more numbers");
	std::vector<int>::iterator min = std::min_element(_storage.begin(), _storage.end());
	std::vector<int>::iterator max = std::max_element(_storage.begin(), _storage.end());
	return (*max - *min);
}

static int randomGenerator(void)
{
	return (rand() % 100000);
}

void Span::autofill()
{
	_storage.resize(_cap);
	std::generate(_storage.begin(), _storage.end(), &randomGenerator);
}
