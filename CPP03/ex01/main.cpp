/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:01:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 07:27:06 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    scavtrap("Oat");
    
    scavtrap.attack("Mushroom");
    scavtrap.guardGate();
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(1);

    return (0);
}