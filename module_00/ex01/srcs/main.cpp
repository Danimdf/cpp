/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/11 23:46:10 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	std::string teste;
	PhoneBook teste1;
	Contact contact;
	int numberContact = 1;

	while (1)
	{
		teste1.Print("Olá. Você pode escolher entre três ações: ADD, SEARCH e EXIT!");
		getline(std::cin, teste);
		if (!teste.compare("ADD"))
		{
			teste1.Print("Adicione um contato. Primeiro o nome:");
			getline(std::cin, teste);
			contact.name = teste;
			teste1.Print("Agora o número do contato:");
			getline(std::cin, teste);
			contact.number = teste;
			teste1.Add(contact, numberContact);
			numberContact++;
		}
		else
			std::exit(1);
	}
}
