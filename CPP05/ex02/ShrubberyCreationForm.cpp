/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 07:39:55 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 10:11:35 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 190, 137) , _target(target)
{
    std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
    try
    {
        if (AForm::getGradeToSign() < 1 || AForm::getGradeToExecute() < 1)
            throw AForm::GradeTooHighException();
        if (AForm::getGradeToSign() > 150 || AForm::getGradeToExecute() > 150)
            throw AForm::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
    this->_target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if ((unsigned int)executor.getGrade() > this->getGradeToExecute())
        throw FileCreationException();
    std::ofstream file;
    std::string filename = this->_target + "_shrubbery";
    file.open(filename.c_str());
    if (file.is_open())
    {
        file << "  A\n";
        file << " / \\\n";
        file << "B   C\n";
        file << "   / \\\n";
        file << "  D   E\n";
        file.close();
    }
    else
    {
        std::cerr << "Error: could not open file" << std::endl;
    }
}

const char  *ShrubberyCreationForm::FileCreationException::what() const throw()
{
    return ("Grade is too low to execute form");
}

std::string const& ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
