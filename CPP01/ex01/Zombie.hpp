/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:16:52 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 11:08:05 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name); 
} ;

#endif
