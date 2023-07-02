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

void PhoneBook::Add(Contact newContact, int i) {
	Contact contact;
	if (i > 7)
		contact.SetContact(contacts, newContact, 7);
	else
		contact.SetContact(contacts, newContact, i);
}

void PhoneBook::PrintData(int size, int numCols, int colWidth, Contact data[])
{
	for (int i = 0; i < size; i++)
	{
		if (data[i].firstName != "")
		{
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << data[i].index << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(data[i].firstName) << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(data[i].lastName) << " | ";
			std::cout << std::setfill(' ') << std::setw(colWidth) << std::left << LenghtOnlyTenChars(data[i].nickName) << " | ";
			std::cout << std::endl;
			PrintSeparate(numCols, colWidth);
		}
	}
}

void PhoneBook::Search(std::string index) {
	printTable(contacts, 8);
	Print("Would you like to view a specific contact? What is the index");
	getline(std::cin, index);
	std::cout << std::endl;
	SearchSpecificContact(index);
}

void PhoneBook::printTable(Contact data[], int size) {
	const int numCols = 4;
	const int colWidth = 11;
	std::string cols[] = {"Index ", "First Name ", "Last Name ", "Nick Name "};

	PrintColTable(cols, numCols, colWidth);
	PrintSeparate(numCols, colWidth);
	PrintData(size, numCols, colWidth, data);
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
	if (numberIndex > 8 || numberIndex < 0 || contacts[numberIndex].index != index)
	{
		Print("**********************************************************************************");
		Print("That index does not exist in your phonebook. Please choose according to the table.");
		Print("**********************************************************************************");
		Search("");
	}
	contact.PrintContact(contacts, index);
}

bool PhoneBook::ExitPhone() {
	std::exit(0);
}
