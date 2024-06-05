/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:14:28 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/05 14:35:22 by moetienn         ###   ########.fr       */
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
        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs);
        bool    operator<=(Fixed const &rhs);
        bool    operator==(Fixed const &rhs);
        bool    operator!=(Fixed const &rhs);

        static Fixed    &max(Fixed &a, Fixed &b);
        static Fixed    &min(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
} ;


std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
