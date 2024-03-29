/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 19:30:18 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie zombie1 = Zombie("Stank");
	Zombie *zombie2 = newZombie("Hippie");

	zombie1.announce();
	zombie2->announce();
	std::cout << "----------------------------------------------------------" << std::endl;
	randomChump("");

	delete zombie2;
	return (0);
}
