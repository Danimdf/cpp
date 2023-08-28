/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:20:58 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:21:06 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void): _type("Random_AAnimal")
{
	std::cout << "Default constructor AAnimal called." << std::endl;
	return;
}

AAnimal::AAnimal(const std::string &name) : _type(name)
{
	std::cout << "Constructor with parameter name AAnimal called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Copy constructor AAnimal called." << std::endl;
	*this = copy;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal called" << std::endl;
	return;
}

AAnimal& AAnimal::operator=(AAnimal const &value)
{
	if (this != &value)
        this->setType(value.getType());
	std::cout << "Copy assignment AAnimal operator called." << std::endl;
	return (*this);
}

void AAnimal::setType(const std::string& type)
{
    this->_type = type; 
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}