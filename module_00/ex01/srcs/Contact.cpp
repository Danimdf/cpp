/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:36:04 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/17 00:02:14 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <iostream>

void Contact::SetContact(Contact cont[], Contact newContact, int i)
{
	cont[i].index = newContact.index;
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
			phonebook.Print(contacts[i].index);
			phonebook.Print(contacts[i].firstName);
			phonebook.Print(contacts[i].lastName);
			phonebook.Print(contacts[i].nickName);
			phonebook.Print(contacts[i].phoneNumber);
			phonebook.Print(contacts[i].darkestSecret);
		}
	}
	std::cout << std::endl;
}
