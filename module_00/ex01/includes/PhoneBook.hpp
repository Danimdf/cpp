#include <string>
#include "../includes/Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
class PhoneBook {
	public:
		Contact contact[8];
		void Print(std::string phrase);
		void Add(Contact newContact, int i);
		void Search(std::string index);
		bool ExitPhone(void);
		std::string NumberToString(int number);

	private:
		void setContact(Contact newContact, int i);
		void SearchSpecificContact(std::string index);
		std::string LenghtOnlyTenChars(std::string word);
		std::string addPeriod(std::string &word);
		int StringToNumber(std::string str);
};

#endif
