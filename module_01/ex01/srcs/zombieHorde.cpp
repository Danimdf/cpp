/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:11:16 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 16:42:06 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <stdlib.h>
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	srand((unsigned) time(NULL));
	const int randomNumber = std::rand() % 10;

	if(name == "")
		name = "RandomGuy";
	if (randomNumber % 2 == 0)
	{
		std::cout << "This guy's is being allocated on the Heap." << std::endl;

		Zombie *zombiesHeap = new Zombie[N];
		for(int i = 0; i < N; i++)
		{
			zombiesHeap[i].setZombieName(name);
			zombiesHeap[i].announce();
		}
		return (zombiesHeap);
	}
	else
	{
		std::cout << "This guy's is being allocated on the Stack." << std::endl;

		Zombie zombiesStack[N];
		for(int i = 0; i < N; i++)
		{
			zombiesStack[i].setZombieName(name);
			zombiesStack[i].announce();
		}
	}
	return (0);
}