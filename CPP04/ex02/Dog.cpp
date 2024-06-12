/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:29:21 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 07:48:51 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal(src), _brain(NULL)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof" << std::endl;
}

Dog&    Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    if (this->_brain != NULL)
    {
        delete this->_brain;
        this->_brain = NULL;
    }
    this->_brain = new Brain(*rhs._brain);
    return (*this);
}

Dog::~Dog(void)
{
    if (this->_brain != NULL)
        delete  _brain;
    std::cout << "Dog " << this->_type << " destructor called" << std::endl;
}