/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:56 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 11:16:52 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

/**
 * @brief Contact class that stores the contact information.
 * use of string to store the contact information.
 * private access specifier is used to make the variables private.
 * _ is used to indicate that the variable is private.
 * public access specifier is used to make the functions public.
*/

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact(void);
        ~Contact(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setNickname(std::string nickname);
        void setPhoneNumber(std::string phone_number);
        void setDarkestSecret(std::string darkest_secret);
} ;

#endif
