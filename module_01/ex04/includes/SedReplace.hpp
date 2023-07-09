/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:30:31 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 13:16:59 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>

#ifndef SED_REPLACE_HPP
# define SED_REPLACE_HPP
class SedReplace
{
	public:
	SedReplace();
	~SedReplace();
	std::string getWordReplace() const;
	std::string getWord() const;
	std::string getFileIn() const;
	std::string getFileOut() const;
	void setWordReplace(std::string word);
	void setWord(std::string word);
	void setFileIn(std::string file);
	void setFileOut(std::string file);
	void replace();

	private:
	std::string _fileIn;
	std::string _fileOut;
	std::string _word;
	std::string _wordReplace;

};

void error(std::string str);
void checkInputs(std::string fileName, std::string str1, std::string str2);
#endif