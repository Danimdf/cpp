/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:39:46 by coder             #+#    #+#             */
/*   Updated: 2023/02/09 02:39:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Speaker {
	public: 
		void Print(std::string phrase)
		{
			std::cout << phrase << std::endl;
		}

		int FtStrLen(std::string str)
		{
			int len = 0;

			for(int i = 0; str[i] != '\0'; i++)
				len++;
			return len;
		}

		char ToUpper(char c)
		{
			if (c >= 'a' && c <= 'z')
				c = c - 32;
			return (c);
		}

		std::string ToUpperCase(std::string phrase)
		{
			char temp;
			int len = FtStrLen(phrase);

			for(int i = 0; i < len; i++)
			{
				temp = phrase[i];
				temp = ToUpper(temp);
				phrase[i] = temp;
			}
			return phrase;
		}
};

int main(int argc, char *argv[])
{
	std::string phraseSet;
	Speaker speaker;
	
	if (argc != 2)
	{
		speaker.Print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		return 1;
	}
	phraseSet = speaker.ToUpperCase(argv[1]);
	speaker.Print(phraseSet);
}
