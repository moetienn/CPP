/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:01:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 09:59:10 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap    scavtrap("Oat");
    FragTrap    fragtrap("Toto");
    
    scavtrap.attack("Mushroom");
    scavtrap.guardGate();
    fragtrap.highFivesGuys();
    fragtrap.attack("Oat");
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(1);
    fragtrap.beRepaired(1);

    return (0);
}