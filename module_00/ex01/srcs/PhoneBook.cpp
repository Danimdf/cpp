/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:35:49 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/06/28 00:37:53 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <iomanip>

void PhoneBook::Print(std::string phrase)
{
	std::cout << phrase << std::endl;
}

void PhoneBook::PrintColTable(std::string* cols, int numCols, int colWidth)
{
	for (int i = 0; i < numCols; i++)
		std::cout << std::setw(colWidth) << std::left << cols[i] << " | ";
	std::cout << std::endl;
}

void PhoneBook::PrintSeparate(int numCols, int colWidth)
{
	for (int i = 0; i < numCols; i++)
		std::cout << std::setfill('-') << std::setw(colWidth) << "-" << "-+-";
	std::cout << std::endl;
}

void PhoneBook::AddContact(int i)
{
	Contact contact;

	Print("Adding a contact. First name:");
	this->contacts[i].SetIndex(NumberToString(i));
	this->contacts[i].SetFirstName(contact.GetInput());
	Print("Last name:");
	this->contacts[i].SetLastName(contact.GetInput());
	Print("NickName:");
	this->contacts[i].SetNickName(contact.GetInput());
	Print("Phone number:");
	this->contacts[i].SetPhoneNumber(contact.GetInput());
	Print("A darkest secret:");
	this->contacts[i].SetDarkestSecret(contact.GetInput());
}

void PhoneBook::PrintData(int size, int numCols, int colWidth)
{
	for (int i = 0; i < size; i++)
	{
		if (this->contacts[i].GetFirstName() != "")
		{
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << this->contacts[i].GetIndex() << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(this->contacts[i].GetFirstName()) << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(this->contacts[i].GetLastName()) << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(this->contacts[i].GetNickName()) << " | ";
			std::cout << std::endl;
			PrintSeparate(numCols, colWidth);
		}
	}
}

void PhoneBook::Search(std::string index) {
	printTable(8);
	Print("Would you like to view a specific contact? What is the index");
	getline(std::cin, index);
	std::cout << std::endl;
	SearchSpecificContact(index);
}

void PhoneBook::printTable(int size) {
	const int numCols = 4;
	const int colWidth = 11;
	std::string cols[] = {"Index ", "First Name ", "Last Name ", "Nick Name "};

	PrintColTable(cols, numCols, colWidth);
	PrintSeparate(numCols, colWidth);
	PrintData(size, numCols, colWidth);
}

std::string PhoneBook::LenghtOnlyTenChars(std::string word)
{
	int numberChars = word.length();
	if (numberChars >= 10)
	{
		word = word.substr(0,10);
		return AddPeriod(word);
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

std::string PhoneBook::AddPeriod(std::string &word)
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
	Contact contact;

	int numberIndex = StringToNumber(index);
	if (numberIndex > 8 || numberIndex < 0 || this->contacts[numberIndex].GetIndex() != index)
	{
		Print("**********************************************************************************");
		Print("That index does not exist in your phonebook. Please choose according to the table.");
		Print("**********************************************************************************");
		Search("");
	}
	PrintContact(index);
}

void PhoneBook::PrintContact(std::string index)
{
	PhoneBook phonebook;
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].GetIndex() == index)
		{
			Print("Information of the selected contact:");
			Print("Index: " + this->contacts->GetIndex());
			Print("First name: " + this->contacts[i].GetFirstName());
			Print("Last name: " + this->contacts[i].GetLastName());
			Print("NickName: " + this->contacts[i].GetNickName());
			Print("Phone number: " + this->contacts[i].GetPhoneNumber());
			Print("Darkest secret: " + this->contacts[i].GetDarkestSecret());
		}
	}
}

bool PhoneBook::ExitPhone() {
	std::exit(0);
}
