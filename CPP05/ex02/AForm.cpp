/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:30:55 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 09:03:54 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::AForm(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    try
    {
        if (gradeToSign < 1 || gradeToExecute < 1)
            throw AForm::GradeTooHighException();
        if (gradeToSign > 150 || gradeToExecute > 150)
            throw AForm::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

AForm::AForm(AForm const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
    o << "Form: " << rhs.getName() << " is " << (rhs.getSigned() ? "" : "not ") << "signed. Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute();
    return (o);
}

AForm &AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::string const &AForm::getName(void) const
{
    return this->_name;
}

bool AForm::getSigned(void) const
{
    return this->_signed;
}

unsigned int AForm::getGradeToSign(void) const
{
    return this->_gradeToSign;
}

unsigned int AForm::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

void    AForm::beSigned(Bureaucrat const &b)
{
    try
    {
        if ((const unsigned int)b.getGrade() > this->_gradeToSign)
            throw AForm::GradeTooLowException();
        this->_signed = true;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high to sign the form";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low to sign the form";
}

AForm::~AForm(void)
{
}