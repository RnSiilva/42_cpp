/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:06:15 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:57:21 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
	
// int main() {
// 	Animal* a = new Dog();
// 	a->makeSound();  // ❌ imprime "Animal sound"
// 	delete a;
// }

int main()
{	
	std::cout << ("SUBJECT TEST:") << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << ("COPY TEST:") << std::endl;
	const Animal *original = new Dog();
	const Animal *pointToOriginal = original;

	std::cout << pointToOriginal->getType() << std::endl;
	pointToOriginal->makeSound();

	const Dog *otherOriginal = new Dog();
	const Dog *newCopy = new Dog(*otherOriginal);

	std::cout << otherOriginal->getType() << std::endl;
	otherOriginal->makeSound();

	std::cout << newCopy->getType() << std::endl;
	newCopy->makeSound();

	delete original;
	delete otherOriginal;
	delete newCopy;
	std::cout << std::endl;

	std::cout << ("WRONG ANIMAL TEST:") << std::endl;
	const WrongAnimal* cat = new WrongCat();
	cat->makeSound();
	delete cat;
}