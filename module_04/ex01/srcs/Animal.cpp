/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:00 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:14:03 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("Random_Animal")
{
	std::cout << "Default constructor Animal called." << std::endl;
	return;
}

Animal::Animal(const std::string &name) : _type(name)
{
	std::cout << "Constructor with parameter name Animal called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Copy constructor Animal called." << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
	return;
}

Animal& Animal::operator=(Animal const &value)
{
	if (this != &value)
        this->setType(value.getType());
	std::cout << "Copy assignment Animal operator called." << std::endl;
	return (*this);
}

void Animal::setType(const std::string& type)
{
    this->_type = type; 
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
    std::cout << "Strange noise. Is it really a " << this->getType() << "?" << std::endl;
}