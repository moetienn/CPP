/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:12:34 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 10:54:32 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    _energyPoints = ScavTrap::_energyPoints;
    _hitpoints = FragTrap::_hitpoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor has been called" << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << DiamondTrap::_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor has been called" << std::endl;
}