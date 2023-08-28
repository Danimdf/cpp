/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:38 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:13:40 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Random_Dog")
{
	std::cout << "Default constructor Dog called." << std::endl;
	return;
}

Dog::Dog(const std::string &name) : Animal(name)
{
	std::cout << "Constructor with parameter name Dog called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Copy constructor Dog called." << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	return;
}

Dog& Dog::operator=(Dog const &Dog)
{
	if (this != &Dog)
        this->_type = Dog._type;
	std::cout << "Copy assignment Dog operator called." << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Auuuuuuuuuuuuu!" << std::endl;
}