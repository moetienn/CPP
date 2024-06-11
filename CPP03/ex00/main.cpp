/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:01:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/10 09:32:24 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    claptrap("Momo");
    ClapTrap    claptrap2("Toto");
    ClapTrap    claptrap3("Oat");

    claptrap.attack("Toto");
    claptrap2.takeDamage(0);
    claptrap2.beRepaired(0);
    
    claptrap3.attack("Momo");
    claptrap.takeDamage(0);
    claptrap.beRepaired(0);

    claptrap2.attack("Oat");
    claptrap3.takeDamage(0);
    claptrap3.beRepaired(0);
    return (0);
}