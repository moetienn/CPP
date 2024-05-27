/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:14 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/27 11:54:38 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

bool    isValidIndex(std::string index, int size)
{
    int int_index = std::atoi(index.c_str());

    if (index.empty())
    {
        std::cout << "Index cannot be empty" << std::endl;
        std::cout << "Enter index: ";
        return (false);
    }
    if (index.length() != 1 || index[0] < '1' || index[0] > '8')
    {
        std::cout << "Invalid index" << std::endl;
        std::cout << "Enter index: ";
        return (false);
    }
    if (int_index > size)
    {
        std::cout << "Contact is empty" << std::endl;
        std::cout << "Enter index: ";
        return (false);
    }
    return (true);
}

std::string formatOutput(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str += ".";
    }
    return (str);
}

bool isValidPhoneNumber(std::string phone_number)
{
    if (phone_number.empty())
    {
        std::cout << "Phone number cannot be empty" << std::endl;
        std::cout << "Enter phone number: ";
        return (false);
    }
    for (int i = 0; i < (int)phone_number.length(); i++)
    {
        if (!std::isdigit(phone_number[i]))
        {
            std::cout << "Invalid phone number" << std::endl;
            std::cout << "Enter phone number: ";
            return (false);
        }
    }
    return (true);
}

void    PhoneBook::search_contact(void)
{
    if (this->_index == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < this->_index; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << formatOutput(this->_contacts[i].get_first_name()) << "|";
        std::cout << std::setw(10) << formatOutput(this->_contacts[i].get_last_name()) << "|";
        std::cout << std::setw(10) << formatOutput(this->_contacts[i].get_nickname()) << std::endl;
    }
    std::string index;
    std::cout << "Enter index: ";
    std::getline(std::cin, index);
    while (isValidIndex(index, this->_index) == false)
    {
        std::getline(std::cin, index);
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
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "Enter first name: ";
    while (first_name.empty())
    {
        std::getline(std::cin, first_name);
        if (!first_name.empty())
            break;
        std::cout << "First name cannot be empty" << std::endl;
        std::cout << "Enter first name: ";
    }
    contact.set_first_name(first_name);
    std::cout << "Enter last name: ";
    while (last_name.empty())
    {
        std::getline(std::cin, last_name);
        if (!last_name.empty())
            break;
        std::cout << "Last name cannot be empty" << std::endl;
        std::cout << "Enter last name: ";
    }
    contact.set_last_name(last_name);
    std::cout << "Enter nickname: ";
    while (nickname.empty())
    {
        std::getline(std::cin, nickname);
        if (!nickname.empty())
            break;
        std::cout << "Nickname cannot be empty" << std::endl;
        std::cout << "Enter nickname: ";
    }
    contact.set_nickname(nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    while (isValidPhoneNumber(phone_number) == false)
    {
        std::getline(std::cin, phone_number);
    }
    contact.set_phone_number(phone_number);
    std::cout << "Enter darkest secret: ";
    while (darkest_secret.empty())
    {
        std::getline(std::cin, darkest_secret);
        if (!darkest_secret.empty())
            break;
        std::cout << "Darkest secret cannot be empty" << std::endl;
        std::cout << "Enter darkest secret: ";
    }
    contact.set_darkest_secret(darkest_secret);
    if (this->_index < 8)
    {
        this->_contacts[this->_index] = contact;
        this->_index++;
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            this->_contacts[i] = this->_contacts[i + 1];
        }
        this->_contacts[7] = contact;
    }
}
