/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 19:09:18 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SedReplace.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>

void error(std::string str)
{
	std::cout << str << std::endl;
	std::exit(EXIT_FAILURE);
}

void checkInputs(std::string fileName, std::string str1, std::string str2)
{
	if(fileName.empty() || str1.empty() || str2.empty())
		error("File or words not found.");
}

int main(int argc, char *argv[])
{
	SedReplace sed;
	if (argc != 4)
		error("Invalid input! You need to provide a valid file name,"
		"the string you want to replace and a string for replacement.");
	checkInputs(argv[1], argv[2], argv[3]);
	sed.setFileIn(argv[1]);
	sed.setFileOut(argv[1]);
	sed.setWord(argv[2]);
	sed.setWordReplace(argv[3]);
	sed.replace();
}
