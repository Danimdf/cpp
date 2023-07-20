/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/19 21:24:48 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	pokemon;
	ClapTrap	totodile("Totodile");
	ClapTrap	chikorita("Chikorita");
	ClapTrap	PokeCpy = pokemon;
	ClapTrap	pikachu(PokeCpy);

	std::cout << std::endl;
	std::cout << "Totodile attacks Chikorita" << std::endl;
	totodile.attack(chikorita.getName());
	chikorita.takeDamage(chikorita.getAttackDamage());
	chikorita.beRepaired(10);
	std::cout << std::endl;

	std::cout << "Chikorita attacks Pokemon" << std::endl;
	chikorita.attack(pokemon.getName());
	pokemon.takeDamage(pokemon.getAttackDamage());
	pokemon.beRepaired(5);
	std::cout << std::endl;

	std::cout << "Pokemon attacks Pikachu" << std::endl;
	pokemon.attack(pikachu.getName());
	pikachu.takeDamage(pikachu.getAttackDamage());
	pikachu.beRepaired(6);
	std::cout << std::endl;

	std::cout << "Pikachu attacks Totodile" << std::endl;
	pikachu.attack(totodile.getName());
	totodile.takeDamage(totodile.getAttackDamage());
	totodile.beRepaired(4);
	std::cout << std::endl;

	std::cout << "Totodile attacks Pikachu" << std::endl;
	pikachu.takeDamage(10);
	totodile.attack(pikachu.getName());
	pikachu.beRepaired(2);
	std::cout << std::endl;

	std::cout << "Pikachu attacks Chikorita" << std::endl;
	pikachu.setEnergyPoints(0);
	pikachu.attack(chikorita.getName());
	std::cout << std::endl;

	std::cout << "Pikachu attacks Pokemon" << std::endl;
	pokemon.setEnergyPoints(0);
	pikachu.attack(pokemon.getName());
	pokemon.beRepaired(3);
	std::cout << std::endl;

	return 0;
}
