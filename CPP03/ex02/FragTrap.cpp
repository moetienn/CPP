/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 07:35:57 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 09:58:25 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    _energyPoints = 100;
    _attackDamage = 30;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " high fives guys!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}