/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/06/28 00:37:03 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

std::string GetInput() {
	std::string input;
	
	getline(std::cin, input);
	return input;
}

int main()
{
	std::string input;
	PhoneBook phonebook;
	Contact contact;
	int numberContact = 0;
	
	while (1)
	{
		phonebook.Print("*************************************************************");
		phonebook.Print("Olá, está é sua Agenda. Você pode escolher entre três ações: ADD, SEARCH e EXIT!");
		input = GetInput();
		if (!input.compare("ADD"))
		{
			phonebook.Print("Adicionando um contato. Primeiro nome:");
			contact.index = phonebook.NumberToString(numberContact);
			contact.firstName = GetInput();
			phonebook.Print("Sobrenome:");
			contact.lastName = GetInput();
			phonebook.Print("Agora o seu NickName:");
			contact.nickName = GetInput();
			phonebook.Print("O número de telefone:");
			contact.phoneNumber = GetInput();
			phonebook.Print("Me conte. ME CONTE AGORA, um segredo obscuro:");
			contact.darkestSecret = GetInput();
			phonebook.Add(contact, numberContact);
			numberContact++;
		}
		else if (!input.compare("SEARCH"))
			phonebook.Search("");
		else if (!input.compare("EXIT"))
			phonebook.ExitPhone();
		else
			phonebook.Print("Por favor, digite corretamente a palavra da Ação! Lembre-se das letras maiúsculas!");
	}
}
