/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:32 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/27 14:18:31 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    while (1)
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
