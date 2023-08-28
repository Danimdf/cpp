/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:07 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:13:12 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal("Random_WrongCat")
{
	std::cout << "Default constructor WrongCat called." << std::endl;
	return;
}

WrongCat::WrongCat(const std::string &name) : WrongAnimal(name)
{
	std::cout << "Constructor with parameter name WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "Copy constructor WrongCat called." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
	return;
}

WrongCat& WrongCat::operator=(WrongCat const &WrongCat)
{
	if (this != &WrongCat)
        this->_type = WrongCat._type;
	std::cout << "Copy assignment WrongCat operator called." << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miauuuuuuuuuuuuu!" << std::endl;
}