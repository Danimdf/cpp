#include <string>
#include "../includes/Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
class PhoneBook {
	public:
		Contact contacts[8];
		void Print(std::string phrase);
		void Add(Contact newContact, int i);
		void Search(std::string index);
		bool ExitPhone(void);
		std::string NumberToString(int number);

	private:
		void SearchSpecificContact(std::string index);
		std::string LenghtOnlyTenChars(std::string word);
		std::string AddPeriod(std::string &word);
		int StringToNumber(std::string str);
		void printTable(Contact data[], int size);
		void PrintColTable(std::string* cols, int numCols, int colWidth);
		void PrintSeparate(int numCols, int colWidth);
		void PrintData(int size, int numCols, int colWidth, Contact data[]);
};

#endif
