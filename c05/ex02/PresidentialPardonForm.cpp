/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:34:27 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/15 01:34:27 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}
PresidentialPardonForm::~PresidentialPardonForm(void)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target)
{

}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::IsNotSignException();
    if (executor.getGrade() >= this->getExecGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
const std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}
std::ostream & operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
    o << "[Presidential] : (name : " << i.getTarget() << ") " ;
    o << "(sign status : " << i.getSigned() << ") " << std::endl;
    o << "sign req : " << i.getSignedGrade() << " exe req : " << i.getExecGrade() << std::endl;
	return (o);
}