/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:39 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/27 10:03:40 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_first_name(void)
{
    return this->_first_name;
}

std::string Contact::get_last_name(void)
{
    return this->_last_name;
}

std::string Contact::get_nickname(void)
{
    return this->_nickname;
}

std::string Contact::get_phone_number(void)
{
    return this->_phone_number;
}

std::string Contact::get_darkest_secret(void)
{
    return this->_darkest_secret;
}

void Contact::set_first_name(std::string first_name)
{
    this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}
