/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:56:47 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/10 09:27:35 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no more energy points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    }
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
    _hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        return ;
    }
    if (_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
    _hitpoints += amount;
    _energyPoints -= 1;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called " << _name << std::endl;
}