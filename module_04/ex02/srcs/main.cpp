/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:03:56 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 14:27:08 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/AAnimal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Brain.hpp"
#include <string>
#include <iostream>

void test_ideas()
{
	std::cout << "-----------Test Ideas-------------" << std::endl;
	Cat* cat = new Cat();
	Dog* dog = new Dog();
	std::cout << std::endl;
	Cat* cat2 = new Cat();
	Dog* dog2 = new Dog();
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		dog->getBrain()->setIdeas(i, "Rest my chemistry");
		cat->getBrain()->setIdeas(i, "Obstacle 1");
	}
	for (int i = 0; i < 3; i++)
		std::cout << "Cat: " << (i + 1) << ": " << cat->getBrain()->getIdeas(i) << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Dog: " << (i + 1) << ": " << dog->getBrain()->getIdeas(i) << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Dog2: " << (i + 1) << ": " << dog2->getBrain()->getIdeas(i) << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Cat2: " << (i + 1) << ": " << cat2->getBrain()->getIdeas(i) << std::endl;
	
	delete cat;
	delete dog;
	delete cat2;
	delete dog2;
}

void test_array()
{
	std::cout << "-----------Test Array-------------" << std::endl;
	AAnimal* animals[6];

	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (int i = 3; i < 6; i++) {
		animals[i] = new Cat();
	}
	std::cout << std::endl << "Animals make sound: " << std::endl;
	for (int i = 0; i < 6; i++){
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}
	std::cout << std::endl << "Delete animals: " << std::endl;
	for (int i = 0; i < 6; i++)
		delete animals[i];
}

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "-------------My tests---------------" << std::endl;
	test_array();
	test_ideas();

	return 0;
}