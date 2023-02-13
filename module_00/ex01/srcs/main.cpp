/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/13 00:49:52 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>


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
		getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			phonebook.Print("Adicionando um contato. Primeiro nome:");
			getline(std::cin, input);
			contact.index = phonebook.NumberToString(numberContact);
			contact.firstName = input;
			phonebook.Print("Sobrenome:");
			getline(std::cin, input);
			contact.lastName = input;
			phonebook.Print("Agora o seu NickName:");
			getline(std::cin, input);
			contact.nickName = input;
			phonebook.Print("O número de telefone:");
			getline(std::cin, input);
			contact.phoneNumber = input;
			phonebook.Print("Me conte. ME CONTE AGORA, um segredo obscuro:");
			getline(std::cin, input);
			contact.darkestSecret = input;
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
