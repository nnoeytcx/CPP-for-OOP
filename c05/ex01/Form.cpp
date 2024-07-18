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

#include "Form.hpp"

Form::Form(void) : _name("default"), _sign_grade(0), _exec_grade(0)
{
 
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{

}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{

}

Form &Form::operator=(const Form &other)
{
    if (this == &other)
        return (*this);
    _signed = other._signed;
    return (*this);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_sign_grade)
        throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

int Form::getSignedGrade(void) const
{
    return (this->_sign_grade);
}

int Form::getExecGrade(void) const
{
    return (this->_exec_grade);
}

std::ostream & operator<< (std::ostream &o, Form const & i)
{
	o<<GREEN<<"[Form's name : "<<i.getName()<<"]"<<std::endl;
    o<<GREEN<<"[Form's status : "<<i.getSigned()<<"]"<<std::endl;
    o<<GREEN<<"[Form's sign grade : "<<i.getSignedGrade()<<"]"<<std::endl;
    o<<GREEN<<"[Form's exec grade : "<<i.getExecGrade()<<"]"<<std::endl<<RESET;
	return (o);
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high ";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}