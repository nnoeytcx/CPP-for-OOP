/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:14:05 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/14 18:14:05 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _exec_grade(0), _sign_grade(0)
{
 
}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(void)
{

}

AForm::AForm(const AForm &other) : _name(other._name), _exec_grade(other._exec_grade), _sign_grade(other._sign_grade), _signed(other._signed)
{

}

AForm &AForm::operator=(const AForm &other)
{
    if (this == &other)
        return (*this);
    _signed = other._signed;
    return (*this);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_sign_grade)
        throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

const std::string AForm::getName(void) const
{
    return (this->_name);
}

const bool AForm::getSigned(void) const
{
    return (this->_signed);
}

const int AForm::getSignedGrade(void) const
{
    return (this->_sign_grade);
}

const int AForm::getExecGrade(void) const
{
    return (this->_exec_grade);
}

std::ostream & operator<< (std::ostream &o, AForm const & i)
{
	o<<GREEN<<"[Form's name : "<<i.getName()<<"]"<<std::endl;
    o<<GREEN<<"[Form's status : "<<i.getSigned()<<"]"<<std::endl;
    o<<GREEN<<"[Form's sign grade : "<<i.getSignedGrade()<<"]"<<std::endl;
    o<<GREEN<<"[Form's exec grade : "<<i.getExecGrade()<<"]"<<std::endl<<RESET;
	return (o);
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high ";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

const char * AForm::IsNotSignException::what() const throw(){
	return "This Form is not be signed yet!";
}

// void AForm::execute(Bureaucrat const & executor) const
// {
//     std::cout<<"Try Execute"<<std::endl;
//     if (this->_signed == false)
//     {
//         std::cout<<executor.getName()<<" yay you can execute this form"<<std::endl;
//     }
//     else if (!executor.getGrade() < this->_exec_grade)
//     {
//         throw AForm::GradeTooLowException();
//     }
//     else
//         std::cout<<executor.getName()<<" Noo you cannot execute this form"<<std::endl;
// }
        