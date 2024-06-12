/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:29:00 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 07:48:30 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
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

void    Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}