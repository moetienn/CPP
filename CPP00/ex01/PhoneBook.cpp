#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::search_contact(void)
{
    if (this->_index == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return;
    }
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < this->_index; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_first_name() << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_last_name() << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_nickname() << std::endl;
    }
    std::string index;
    std::cout << "Enter index: ";
    std::cin >> index;
    if (index.length() != 1 || index[0] < '1' || index[0] > '8')
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    int i = index[0] - '1';
    std::cout << "First name: " << this->_contacts[i].get_first_name() << std::endl;
    std::cout << "Last name: " << this->_contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname: " << this->_contacts[i].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->_contacts[i].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << this->_contacts[i].get_darkest_secret() << std::endl;

}

void    PhoneBook::add_contact(void)
{
    if (this->_index == 8)
    {
        this->_index = 0;
    }
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "Enter first name: ";
    std::cin >> first_name;
    contact.set_first_name(first_name);
    std::cout << "Enter last name: ";
    std::cin >> last_name;
    contact.set_last_name(last_name);
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    contact.set_nickname(nickname);
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    contact.set_phone_number(phone_number);
    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;
    contact.set_darkest_secret(darkest_secret);
    this->_contacts[this->_index] = contact;
    this->_index++;
}