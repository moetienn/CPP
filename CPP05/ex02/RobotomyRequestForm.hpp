/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:07:21 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 10:08:35 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        virtual ~RobotomyRequestForm(void);

        std::string const&      getTarget(void) const;
        RobotomyRequestForm     &operator=(RobotomyRequestForm const &rhs);
        void                    execute(Bureaucrat const &executor) const;

        class FileCreationException : public std::exception
        {
            virtual const char* what() const throw();
        }   ;
}   ;

#endif