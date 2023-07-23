/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 14:33:48 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap pokemon;
	ScavTrap charizard("Charizard");
	ScavTrap chikorita("Chikorita");
	ScavTrap pokemonCopy(pokemon);
	ClapTrap pikachu("Pikachu Clap");

	std::cout << std::endl;
	charizard.attack(pikachu.getName());
	pikachu.takeDamage(charizard.getAttackDamage());
	pikachu.takeDamage(charizard.getAttackDamage());
	std::cout << std::endl;

	charizard.attack(chikorita.getName());
	chikorita.takeDamage(charizard.getAttackDamage());
	chikorita.takeDamage(charizard.getAttackDamage());
	std::cout << std::endl;

	charizard.attack(chikorita.getName());
	chikorita.takeDamage(charizard.getAttackDamage());
	chikorita.beRepaired(charizard.getAttackDamage());
	std::cout << std::endl;

	charizard.attack(pikachu.getName());
	chikorita.takeDamage(charizard.getAttackDamage());
	charizard.attack(pikachu.getName());
	chikorita.takeDamage(charizard.getAttackDamage());
	charizard.attack(pikachu.getName());
	chikorita.takeDamage(charizard.getAttackDamage());
	charizard.attack(pikachu.getName());
	std::cout << std::endl;

	chikorita.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}
