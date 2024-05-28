/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:05:52 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 12:24:27 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
    this->_name = name;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << this->_name << " is dead" << std::endl;
}
