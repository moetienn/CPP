/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:48:49 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 09:27:08 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Parametric constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "Bureaucrat " << rhs.getName() << " Grade : " << rhs.getGrade();
	return o;
}

void    Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	
}

void    Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::string const Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

// EXCEPTIONS DEFINITIONS //

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
        std::cerr << this->getName() << " cannot execute " << form.getName() << " because his grade is too low" << std::endl;
	}
}

void    Bureaucrat::signForm(bool isSigned, std::string formName)
{
	if (isSigned)
		std::cout << this->getName() << " signs " << formName << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << formName << " because his grade is too low" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << Bureaucrat::getName() << " Destructor called." << std::endl;
}
