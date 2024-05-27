/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:03:25 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/27 11:27:59 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void add_contact(void);
        void search_contact(void);   
} ;

#endif
