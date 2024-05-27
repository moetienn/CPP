#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void add_contact(void);
        void search_contact(void);
};

#endif