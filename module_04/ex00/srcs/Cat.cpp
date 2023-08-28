/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:48 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 22:04:36 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal("Random_Cat")
{
	std::cout << "Default constructor Cat called." << std::endl;
	return;
}

Cat::Cat(const std::string &name) : Animal(name)
{
	std::cout << "Constructor with parameter name Cat called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Copy constructor Cat called." << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	return;
}

Cat& Cat::operator=(Cat const &cat)
{
	if (this != &cat)
        this->_type = cat._type;
	std::cout << "Copy assignment Cat operator called." << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miauuuuuuuuuuuuu!" << std::endl;
}