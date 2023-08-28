/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:13:48 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 10:18:26 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

#include <iostream>

Cat::Cat(void): Animal("Random_Cat")
{
	std::cout << "Default constructor Cat called." << std::endl;
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
        this->_brain->_ideas[i] = "The return of Vampuuuuuurrr";
}

Cat::Cat(Cat const &copy) : Animal()
{
	std::cout << "Copy constructor Cat called." << std::endl;
	this->_brain = new Brain();
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete (this->_brain);
}

Cat& Cat::operator=(Cat const &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
		*(this->_brain) = *(cat.getBrain());
	}
	std::cout << "Copy assignment Cat operator called." << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miauuuuuuuuuuuuu!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return this->_brain;
}