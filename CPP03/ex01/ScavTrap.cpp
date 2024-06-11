/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:38:40 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 07:33:14 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no more energy points!" << std::endl;
        return ;
    }
    if (_hitpoints <= 0)
    {
        std::cout << "ScavTrap is dead!" << std::endl;
        return ;
    }
    _energyPoints -= 1;
    std::cout << "ScavTrap attack " << target << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destroyed" << std::endl;
}

