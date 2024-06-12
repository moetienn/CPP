/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:24:04 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 07:15:31 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain*  _brain;
    public:
        Dog(void);
        Dog(const Dog& src);
        virtual ~Dog(void);

        Dog&    operator=(const Dog& rhs);
        void    makeSound(void) const;
}   ;

#endif