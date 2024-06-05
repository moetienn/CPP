/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:43:03 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 12:07:00 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _value;
        static const int _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed   &operator=(Fixed const &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
} ;


std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif