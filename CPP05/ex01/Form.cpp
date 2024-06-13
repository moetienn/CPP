/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:30:55 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 10:20:51 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    try
    {
        if (gradeToSign < 1 || gradeToExecute < 1)
            throw Form::GradeTooHighException();
        if (gradeToSign > 150 || gradeToExecute > 150)
        {
            std::cout << "HERE" << std::endl;
            throw Form::GradeTooLowException();
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form: " << rhs.getName() << " is " << (rhs.getSigned() ? "" : "not ") << "signed. Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute();
    return (o);
}

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::string const &Form::getName(void) const
{
    return this->_name;
}

bool Form::getSigned(void) const
{
    return this->_signed;
}

unsigned int Form::getGradeToSign(void) const
{
    return this->_gradeToSign;
}

unsigned int Form::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

void    Form::beSigned(Bureaucrat const &b)
{
    try
    {
        if ((const unsigned int)b.getGrade() < this->_gradeToSign)
            this->_signed = true;
        else
            throw Form::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

Form::~Form(void)
{
}