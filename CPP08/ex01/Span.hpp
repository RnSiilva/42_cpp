/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:30:16 by resilva           #+#    #+#             */
/*   Updated: 2026/02/05 04:10:20 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
	private:
		std::vector<int> _storage;
		unsigned int _cap;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &other);
		~Span();

		void	addNumber(int n);
		int		shortestSpan();
		int 	longestSpan();
		void	autofill();
};