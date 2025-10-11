/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:37:54 by resilva           #+#    #+#             */
/*   Updated: 2025/05/25 21:35:59 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string.h>
#include <unistd.h>
#include <cstdlib>
#include <sstream>

#define CLEAR_LINE "\33[2K\r"
#define UP_LINE "\033[1A"

class	Phonebook
{
	private:
		Contact	_contact[8];
		int		_index;
	
	public:
		Phonebook();
		void	add(void);
		void	search(void);
		~Phonebook();
};

void	reset_line(void);
void	header(void);
void	header_search(void);
void	header_add(void);
void	format_input(std::string &str);