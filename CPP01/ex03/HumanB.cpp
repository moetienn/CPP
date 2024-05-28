/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:11:26 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 12:27:22 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void   HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->_name << " is dead" << std::endl;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
