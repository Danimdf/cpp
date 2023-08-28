/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:26 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:13:28 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void): _type("Random_WrongAnimal")
{
	std::cout << "Default constructor WrongAnimal called." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const std::string &name) : _type(name)
{
	std::cout << "Constructor with parameter name WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "Copy constructor WrongAnimal called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &value)
{
	if (this != &value)
        this->setType(value.getType());
	std::cout << "Copy assignment WrongAnimal operator called." << std::endl;
	return (*this);
}

void WrongAnimal::setType(const std::string& type)
{
    this->_type = type; 
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Strange noise. Is it really a " << this->getType() << "?" << std::endl;
}