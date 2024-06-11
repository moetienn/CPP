/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:56:47 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 10:55:41 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;    
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(100), _energyPoints(100), _attackDamage(30)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout  << _name << " has no more energy points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap" << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout <<  _name << " is dead!" << std::endl;
    }
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
    _hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        std::cout << _name << " has no more energy points!" << std::endl;
        return ;
    }
    if (_hitpoints <= 0)
    {
        std::cout << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << _name << " is repaired for " << amount << " points!" << std::endl;
    _hitpoints += amount;
    _energyPoints -= 1;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called " << _name << std::endl;
}