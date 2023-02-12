/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:35:49 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/12 16:27:20 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>

void PhoneBook::Print(std::string phrase)
{
	std::cout << phrase << std::endl;
}

void PhoneBook::Add(Contact newContact, int i){
	if (i > 7)
		setContact(newContact, 7);
	setContact(newContact, i);
}

void PhoneBook::Search(std::string index) {
	for(int i = 0; i < 7; i++)
	{
		Print("| Index | First Name | Last Name | Nick Name |");
		std::cout << "| " << contact[i].index << " | " << contact[i].firstName << " | " << contact[i].lastName << " | " <<  contact[i].nickName << " |" << std::endl;
	}
	Print("Você gostaria de ver algum contato especifico? Qual?");
	getline(std::cin, index);
	SearchSpecificContact(index);
}

void PhoneBook::SearchSpecificContact(std::string index)
{
	for (int i = 0; i < 7; i++)
	{
		if (contact[i].index == index)
		{
			Print(contact[i].index);
			Print(contact[i].firstName);
			Print(contact[i].lastName);
			Print(contact[i].nickName);
		}
	}
}

bool PhoneBook::ExitPhone() {
	std::exit(0);
}

void PhoneBook::setContact(Contact newContact, int i)
{
	contact[i].index = newContact.index;
	contact[i].firstName = newContact.firstName;
	contact[i].lastName = newContact.lastName;
	contact[i].nickName = newContact.nickName;
}
