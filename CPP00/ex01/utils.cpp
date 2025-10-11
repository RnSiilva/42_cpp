/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:14:12 by resilva           #+#    #+#             */
/*   Updated: 2025/05/25 21:41:25 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	reset_line(void)
{
	sleep(2);
	std::cin.clear();
	std::cout << CLEAR_LINE;
	std::cout << UP_LINE;
	std::cout << CLEAR_LINE;
	std::cout << UP_LINE;
	std::cout << CLEAR_LINE;
}

void	header(void)
{
	system("clear");
	std::cout << "===========================================\n"
	"|                                         |\n"
	"|       📞 MY AWESOME PHONEBOOK 📖        |\n"
	"|                                         |\n"
	"|       Welcome to the 80s, baby!         |\n"
	"|                                         |\n"
	"|  Commands:                              |\n"
	"|   ➤ ADD     - Add a new contact         |\n"
	"|   ➤ SEARCH  - Search for a contact      |\n"
	"|   ➤ EXIT    - Exit the program          |\n"
	"|                                         |\n"
	"===========================================\n" << std::endl;
}

void	header_search(void)
{
	system("clear");
	std::cout << "===========================================\n"
	"|                                         |\n"
	"|          🔎 SEARCH CONTACTS 📖          |\n"
	"|                                         |\n"
	"|  Commands:                              |\n"
	"|  ➤ [index number] - All contact inform. |\n"
	"|  ➤ BACK                                 |\n"
	"|                                         |\n"
	"===========================================\n" << std::endl;
}


void	header_add(void)
{
	system("clear");
	std::cout << "===========================================\n"
	"|                                         |\n"
	"|           ➕ ADD CONTACTS 📖            |\n"
	"|                                         |\n"
	"|     Enter the requested information     |\n"
	"|                                         |\n"
	"|      * Empty line is not allowed *      |\n"
	"|                                         |\n"
	"===========================================\n" << std::endl;
}

void	format_input(std::string &str)
{
	size_t start, end;
	
	start = str.find_first_not_of(" \t\r\n");
	if (start == std::string::npos)
	{
		str = "";
		return ;
	}
	end = str.find_last_not_of(" \t\r\n");
	str = str.substr(start, end - start + 1);
	for (size_t i = 0; i < str.size(); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = std::toupper(str[i]);
}


