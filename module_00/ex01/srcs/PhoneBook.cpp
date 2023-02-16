/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:35:49 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/16 01:04:55 by Dmonteir         ###   ########.fr       */
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

void PhoneBook::Add(Contact newContact, int i) {
	Contact contact;
	if (i > 7)
		contact.setContact(contacts, newContact, 7);
	contact.setContact(contacts, newContact, i);
}

void PhoneBook::Search(std::string index) {
	for(int i = 0; i < 7; i++)
	{
		if (contacts[i].index.length() > 0)
		{
			Print("|   Index   | First Name | Last Name | Nick Name |");
			std::cout << "|" << LenghtOnlyTenChars(contacts[i].index) << "|" << LenghtOnlyTenChars(contacts[i].firstName) << "|" << LenghtOnlyTenChars(contacts[i].lastName) << "|" <<  LenghtOnlyTenChars(contacts[i].nickName) << "|" << std::endl;	
		}
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
	else
	{
		for(size_t i = 0; i < word.length(); i++)
		{
			if (word.length() < 10)
				word = " " + word + " ";
		}
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

int PhoneBook::StringToNumber(std::string str)
{
  int result;
  std::istringstream convert(str);
  convert >> result;
  return result;
}

void PhoneBook::SearchSpecificContact(std::string index)
{
	int numberIndex = StringToNumber(index);
	if (numberIndex > 8 || numberIndex < 0)
	{
		Print("*************************************************************");
		Print("Esse index não existe em sua Agenda. Por favor, escolha conforme a tabela.");
		Search("");
	}
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].index == index)
		{
			Print(contacts[i].index);
			Print(contacts[i].firstName);
			Print(contacts[i].lastName);
			Print(contacts[i].nickName);
			Print(contacts[i].phoneNumber);
			Print(contacts[i].darkestSecret);
		}
	}
}

bool PhoneBook::ExitPhone() {
	std::exit(0);
}


