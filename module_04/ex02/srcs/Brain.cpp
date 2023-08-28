/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:17:11 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/03 00:27:06 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called." << std::endl;
	return;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Copy constructor Brain called." << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
	return;
}

Brain& Brain::operator=(Brain const &brain)
{
	if (this != &brain)
        for(int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
	std::cout << "Copy assignment Brain operator called." << std::endl;
	return (*this);
}

std::string Brain::getIdeas(int i) const
{
    if (i >= 0 && i < 100)
        return (this->_ideas[i]);
    return (NULL);
}

void Brain::setIdeas(int i, std::string ideas)
{
    if (i >= 0 && i < 100)
        this->_ideas[i] = ideas;
    return;
}
