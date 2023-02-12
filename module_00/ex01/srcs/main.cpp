/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/12 17:02:25 by Dmonteir         ###   ########.fr       */
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
	int numberContact = 0;

	while (1)
	{
		teste1.Print("*************************************************************");
		teste1.Print("Olá, está é sua Agenda. Você pode escolher entre três ações: ADD, SEARCH e EXIT!");
		getline(std::cin, teste);
		if (!teste.compare("ADD"))
		{
			teste1.Print("Adicionando um contato. Primeiro nome:");
			getline(std::cin, teste);
			contact.index = teste1.NumberToString(numberContact);
			contact.firstName = teste;
			teste1.Print("Sobrenome:");
			getline(std::cin, teste);
			contact.lastName = teste;
			teste1.Print("Agora o seu NickName:");
			getline(std::cin, teste);
			contact.nickName = teste;
			teste1.Add(contact, numberContact);
			numberContact++;
		}
		else if (!teste.compare("SEARCH"))
			teste1.Search("");
		else if (!teste.compare("EXIT"))
			teste1.ExitPhone();
		else
			teste1.Print("Por favor, digite corretamente a palavra da Ação! Lembre-se das letras maiúsculas!");
	}
}
