/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/12 16:27:02 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

std::string NumberToString(int number)
{
  std::ostringstream convert;
  convert << number;
  return convert.str();
}

int main()
{
	std::string teste;
	PhoneBook teste1;
	Contact contact;
	int numberContact = 0;

	while (1)
	{
		teste1.Print("*************************************************************");
		teste1.Print("Olá. Você pode escolher entre três ações: ADD, SEARCH e EXIT!");
		getline(std::cin, teste);
		if (!teste.compare("ADD"))
		{
			teste1.Print("Adicionando um contato. Primeiro nome:");
			getline(std::cin, teste);
			contact.index = NumberToString(numberContact);
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
