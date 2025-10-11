/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:06:15 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:57:44 by resilva          ###   ########.fr       */
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

// int main()
// {	
// 	std::cout << ("SUBJECT TEST:") << std::endl;
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
	
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
	
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
	
// 	delete meta;
// 	delete j;
// 	delete i;
// 	std::cout << std::endl;

// 	std::cout << ("COPY TEST:") << std::endl;
// 	const Animal *original = new Dog();
// 	const Animal *pointToOriginal = original;

// 	std::cout << pointToOriginal->getType() << std::endl;
// 	pointToOriginal->makeSound();

// 	const Dog *otherOriginal = new Dog();
// 	const Dog *newCopy = new Dog(*otherOriginal);

// 	std::cout << otherOriginal->getType() << std::endl;
// 	otherOriginal->makeSound();

// 	std::cout << newCopy->getType() << std::endl;
// 	newCopy->makeSound();

// 	delete original;
// 	delete otherOriginal;
// 	delete newCopy;
// 	std::cout << std::endl;

// 	std::cout << ("WRONG ANIMAL TEST:") << std::endl;
// 	const WrongAnimal* cat = new WrongCat();
// 	cat->makeSound();
// 	delete cat;
// }

int main()
{
	std::cout << "===== TESTE 1: ARRAY DE ANIMAIS =====" << std::endl;
	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Limpando array (testando destrutores virtuais) ---" << std::endl;
	for (int i = 0; i < size; ++i)
		delete animals[i];

	std::cout << "\n===== TESTE 2: DEEP COPY =====" << std::endl;

	Cat original;
	original.getBrain()->setIdea(0, "Comer peixe 🍣");
	original.getBrain()->setIdea(1, "Dormir 16 horas 😴");

	Cat copy = original; // chama construtor de cópia (deep copy)

	std::cout << "\n--- Antes da modificação ---" << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	// Modifica só o 'copy'
	copy.getBrain()->setIdea(0, "Correr atrás do laser 🔦");

	std::cout << "\n--- Depois da modificação ---" << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== FIM DOS TESTES =====" << std::endl;
}