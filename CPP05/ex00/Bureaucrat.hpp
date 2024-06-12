/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:48:46 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 09:18:23 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		void				incrementGrade(void);
		void				decrementGrade(void);
		std::string const	getName(void) const;
		int					getGrade(void) const;
		Bureaucrat&			operator=(Bureaucrat const &rhs);

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				~GradeTooHighException(void) throw();
				virtual const char* what() const throw();
		}	;

		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				~GradeTooLowException(void) throw();
				virtual const char* what() const throw();
		}	;
}	;

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif