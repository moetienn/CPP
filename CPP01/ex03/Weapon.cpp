/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:04:18 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 12:10:47 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string const& Weapon::getType(void) const
{
    return (this->_type);
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon(void)
{
    return ;
}
