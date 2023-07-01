/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:36:04 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/18 17:17:40 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <iostream>

void Contact::SetContact(Contact cont[], Contact newContact, int i)
{
	PhoneBook phonebook;

	cont[i].index = phonebook.NumberToString(i);
	cont[i].firstName = newContact.firstName;
	cont[i].lastName = newContact.lastName;
	cont[i].nickName = newContact.nickName;
	cont[i].phoneNumber = newContact.phoneNumber;
	cont[i].darkestSecret = newContact.darkestSecret;
}

void Contact::PrintContact(Contact contacts[], std::string index)
{
	PhoneBook phonebook;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].index == index)
		{
			phonebook.Print("Informações do contato escolhido:");
			phonebook.Print("Index: " + contacts[i].index);
			phonebook.Print("Primeiro Nome: " + contacts[i].firstName);
			phonebook.Print("Sobrenome: " + contacts[i].lastName);
			phonebook.Print("NickName: " + contacts[i].nickName);
			phonebook.Print("Telefone: " + contacts[i].phoneNumber);
			phonebook.Print("Segredo: " + contacts[i].darkestSecret);
		}
	}
}
