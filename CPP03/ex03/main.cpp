/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:01:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 10:37:48 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamond("Bobby");

    diamond.attack("enemy");
    diamond.takeDamage(10);
    diamond.beRepaired(5);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();

    return (0);
}