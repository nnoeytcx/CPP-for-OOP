/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:01:51 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/14 00:01:51 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(0)
{
    // std::cout<<MAGENTA<<"Bureaucrat Default Constructor called"<< std::endl <<RESET;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :  _name(name), _grade(grade)
{
    if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
    // std::cout<<MAGENTA<<"Bureaucrat Assign Constructor called"<< std::endl <<RESET;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    // std::cout<<MAGENTA<<"Bureaucrat Copy Constructor called"<<std::endl <<RESET;
}

Bureaucrat::~Bureaucrat(void)
{
    // std::cout<<MAGENTA<<"Bureaucrat Destructor called"<< std::endl <<RESET;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this == &other)
        return (*this);
    _grade = other._grade;
    return (*this);
    // std::cout<<MAGENTA<<"Bureaucrat Copy Assignment operator called"<< std::endl <<RESET;
}

const std::string Bureaucrat::getName(void) const
{
    return(_name);
}

int Bureaucrat::getGrade(void) const
{
    return(_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high ";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i)
{
	o <<YELLOW<< i.getName() << ", bureaucrat grade " << i.getGrade() <<"."<<RESET; 
	return (o);
}

void    Bureaucrat::signForm(Form &form)
{
    try{
		form.beSigned(*this);
		std::cout<<this->_name<<" signed "<<form.getName()<<std::endl;
	}
	catch (std::exception &e){
		std::cout<<this->_name<<" couldn’t sign "<<form.getName();
        std::cout<<" because "<<e.what()<<std::endl;
	}
}