/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:38 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 10:53:58 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void): AAnimal("Random_Dog")
{
	std::cout << "Default constructor Dog called." << std::endl;
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
        this->_brain->_ideas[i] = "I'm here for you, if you ever need a friend";
}

Dog::Dog(Dog const &copy) : AAnimal()
{
	std::cout << "Copy constructor Dog called." << std::endl;
	this->_brain = new Brain();
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete (this->_brain);
}

Dog& Dog::operator=(Dog const &dog)
{
	if (this != &dog)
	{
        this->_type = dog._type;
		*(this->_brain) = *(dog.getBrain());
	}
	std::cout << "Copy assignment Dog operator called." << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Auuuuuuuuuuuuu!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return this->_brain;
}