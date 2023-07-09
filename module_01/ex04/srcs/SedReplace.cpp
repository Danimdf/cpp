/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:30:00 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 13:06:51 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SedReplace.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <fstream>
#include <sstream>

SedReplace::SedReplace()
{
}

SedReplace::~SedReplace()
{
}

std::string SedReplace::getWordReplace() const
{
	return this->_wordReplace;
}
std::string SedReplace::getWord() const
{
	return this->_word;
}
std::string SedReplace::getFileIn() const
{
	return this->_fileIn;
}

std::string SedReplace::getFileOut() const
{
	return this->_fileOut;
}

void SedReplace::setWordReplace(std::string word)
{
	this->_wordReplace = word;
}

void SedReplace::setWord(std::string word)
{
	this->_word = word;
}
void SedReplace::setFileIn(std::string file)
{
	this->_fileIn = file;
}

void SedReplace::setFileOut(std::string file)
{
	this->_fileOut = file += ".replace";
}

void SedReplace::replace()
{
	std::ifstream in(getFileIn().c_str(), std::ifstream::in);
	if (!in.is_open())
	{
		error("Error to open file Input. File don't exist.");
	}
	std::ofstream out(getFileOut().c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!out.is_open())
		error("Error to open file Output.");
	std::string line;
	std::string word;

	if (in.good() && out.good())
	{
		while (std::getline(in, line))
		{
			std::stringstream ss(line);
			bool firstWord = true;
			while (ss >> word)
			{
				if (!firstWord)
					out << " ";
				if (word == getWord())
					out << getWordReplace();
				else if (word.substr(0, word.length() - 1) == getWord())
				{
					char backChar = word[word.length() - 1];
					std::string wordReplace = getWordReplace();
					wordReplace.push_back(backChar);
					out << wordReplace;
				}
				else
					out << word;
				firstWord = false;
			}
			out << '\n';
		}
	}
	else
		error("An unexpected error occurred. Failed to read the file.");
	in.close();
	out.close();
}
