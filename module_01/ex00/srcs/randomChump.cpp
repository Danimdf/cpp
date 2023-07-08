/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:37:19 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 12:55:01 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <stdlib.h>
#include <iostream>

void randomChump(std::string name)
{
	srand((unsigned) time(NULL));
	int randomNumber = std::rand() % 10;

	if(name == "")
		name = "RandomGuy";
	if (randomNumber % 2 == 0)
	{
		std::cout << "This guy is being allocated on the Heap." << std::endl;
		Zombie *zombie = newZombie(name);
		zombie->announce();
		delete zombie;
	}
	else
	{
		std::cout << "This guy is being allocated on the Stack." << std::endl;
		Zombie zombie = Zombie(name);
		zombie.announce();
	}
}
