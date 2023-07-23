/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 16:06:13 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap pokemon;
	FragTrap bulbasaur("Bulbasaur");
	FragTrap squirtle("Squirtle");
	FragTrap pokemonCopy(pokemon);
	ClapTrap pikachu("Pikachu Clap");

	std::cout << std::endl;
	bulbasaur.attack(pikachu.getName());
	pikachu.takeDamage(bulbasaur.getAttackDamage());
	pikachu.takeDamage(bulbasaur.getAttackDamage());
	std::cout << std::endl;

	bulbasaur.attack(squirtle.getName());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	std::cout << std::endl;

	bulbasaur.attack(squirtle.getName());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	squirtle.beRepaired(bulbasaur.getAttackDamage());
	std::cout << std::endl;

	bulbasaur.attack(pikachu.getName());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	bulbasaur.attack(pikachu.getName());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	bulbasaur.attack(pikachu.getName());
	squirtle.takeDamage(bulbasaur.getAttackDamage());
	bulbasaur.attack(pikachu.getName());
	std::cout << std::endl;

	pokemon.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}
