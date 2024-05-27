#include "contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    while (command != "EXIT")
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command == "EXIT")
            break ;
        else if (command.empty())
            continue ;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}
