#include <string>
#include "../includes/Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
class PhoneBook {
	public:
		Contact contact[8];
		void Print(std::string phrase);
		void Add(Contact newContact, int i);
		void Search(void);
		bool ExitPhone(void);
};

#endif
