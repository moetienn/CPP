/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:20:26 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 10:32:52 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed &operator=(Fixed const &rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
} ;

#endif