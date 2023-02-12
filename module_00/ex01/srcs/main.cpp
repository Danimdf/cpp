/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/12 03:12:01 by Dmonteir         ###   ########.fr       */
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
		teste1.Print("Olá. Você pode escolher entre três ações: ADD, SEARCH e EXIT!");
		getline(std::cin, teste);
		if (!teste.compare("ADD"))
		{
			teste1.Print("Adicionando um contato. Primeiro nome:");
			getline(std::cin, teste);
			contact.index = numberContact;
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
		{
			teste1.Search("oi");
		}
		else
			std::exit(1);
	}
}
