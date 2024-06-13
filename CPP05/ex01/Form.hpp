/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:31:05 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 11:26:19 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExecute;
	public:
		Form(void);
		Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
		Form(Form const& src);
		virtual ~Form(void);

		Form& operator=(Form const& rhs);

		std::string const&	getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getGradeToSign(void) const;
		unsigned int		getGradeToExecute(void) const;

		void				beSigned(Bureaucrat const& b);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		}	;

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		}	;
}	;

std::ostream&	operator<<(std::ostream &o, Form const &rhs);

#endif