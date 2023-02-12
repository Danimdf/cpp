/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:35:49 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/12 17:09:00 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>
#include <sstream>

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
		std::cout << "| " << LenghtOnlyTenChars(contact[i].index) << " | " << LenghtOnlyTenChars(contact[i].firstName) << " | " << LenghtOnlyTenChars(contact[i].lastName) << " | " <<  LenghtOnlyTenChars(contact[i].nickName) << " |" << std::endl;
	}
	Print("Você gostaria de ver algum contato especifico? Qual?");
	getline(std::cin, index);
	SearchSpecificContact(index);
}

std::string PhoneBook::LenghtOnlyTenChars(std::string word)
{
	int numberChars = word.length();
	if (numberChars >= 10)
	{
		word = word.substr(0,10);
		return addPeriod(word);
	}
	return (word);
}

std::string PhoneBook::addPeriod(std::string &word)
{
  int length = word.length();
  word[length - 1] = '.';
  return word;
}

std::string PhoneBook::NumberToString(int number)
{
  std::ostringstream convert;
  convert << number;
  return convert.str();
}

void PhoneBook::SearchSpecificContact(std::string index)
{
	int numberIndex = //Transformar str em int
	if (numberIndex > 8 || numberIndex < 0)
	{
		Print("Esse index não existe em sua Agenda. Por favor, escolha conforme a tabela.");
		Search("");
	}
	for (int i = 0; i < 8; i++)
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
