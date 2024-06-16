/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:34:41 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/15 01:34:41 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}
RobotomyRequestForm::~RobotomyRequestForm(void)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{

}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::IsNotSignException();
    if (executor.getGrade() >= this->getExecGrade())
        throw AForm::GradeTooLowException();
    std::cout<<"**some drilling noises**" <<std::endl;
    if (rand()%2==0)
        std::cout << this->_target << " has been robotomized." << std::endl;
    else
        std::cout<<this->_target <<" robotomy failed!"<<std::endl;
}
const std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}
std::ostream & operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
    o << "[Robotomy] : (name : " << i.getTarget() << ") " ;
    o << "(sign status : " << i.getSigned() << ") " << std::endl;
    o << "sign req : " << i.getSignedGrade() << " exe req : " << i.getExecGrade() << std::endl;
	return (o);
}