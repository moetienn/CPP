/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:39 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 11:16:01 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getFirstName(void)
{
    return this->_first_name;
}

std::string Contact::getLastName(void)
{
    return this->_last_name;
}

std::string Contact::getNickname(void)
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber(void)
{
    return this->_phone_number;
}

std::string Contact::getDarkestSecret(void)
{
    return this->_darkest_secret;
}

void Contact::setFirstName(std::string first_name)
{
    this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
    this->_last_name = last_name;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}
