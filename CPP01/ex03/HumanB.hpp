/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:02:25 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 12:27:30 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void) const;
        void    setWeapon(Weapon& weapon);
} ;

#endif
