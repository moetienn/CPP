/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:51:37 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 08:55:36 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wronganimal")
{
    std::cout << "Wronganimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "Wronganimal type constructor called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wronganimal sound" << std::endl;
}

std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wronganimal destructor called" << std::endl;
}