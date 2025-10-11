/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:18:28 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 16:13:06 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "cstdlib"
#include "fstream"

void	checkArgs(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	file = av[1];
		std::string	toFind = av[2];
		std::string	toReplace = av[3];
		if (file.empty() || toFind.empty() || toReplace.empty())
		{
			std::cout << "Error: empty arguments." << std::endl;
			exit (EXIT_FAILURE);
		}
	}
	else
	{
		std::cout << "Error: invalid number of arguments." << std::endl
				<< "Usage: ./replace <filename> <to_find> <replace>" << std::endl;
		exit(EXIT_FAILURE);
	}
}

std::string	findAndReplace(std::string line, std::string toFind, std::string toReplace)
{
	std::string	result;
	size_t	pos = 0;
	size_t	found;

	while ((found = line.find(toFind, pos)) != std::string::npos)
	{
		result += line.substr(pos, found - pos);
		result += toReplace;
		pos = found + toFind.length(); 
	}
	result += line.substr(pos);
	return (result);
}

int	main(int ac, char **av)
{
	checkArgs(ac, av);
	std::string	newFile = av[1];
	std::string	toFind = av[2];
	std::string	toReplace = av[3];
	std::string	line;

	newFile += ".replace";
	std::ifstream	file(av[1]);
	std::ofstream	replaceFile(newFile.c_str());
	if (file.is_open() && replaceFile.is_open())
	{
		while (std::getline(file, line))
		{
			line = findAndReplace(line, toFind, toReplace);
			replaceFile << line << '\n';
		}
		file.close();
		replaceFile.close();
	}
	else
	{
		std::cout << "Error: failed to open file." << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
