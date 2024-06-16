/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 00:45:01 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/17 00:45:01 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern::~Intern(void)
{

}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

const char* Intern::FormNotFoundException::what() const throw() {
    return "Form can not be found";
}

AForm *Intern::makeForm(const std::string form,const std::string target)
{
    const char *formNames[3] = {"RobotomyRequest", "PresidentialPardon", "ShrubberyCreation"};
	AForm *forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (form == formNames[i])
		{
			std::cout<<YELLOW << "Intern creates " << form << std::endl<<RESET;
			return (forms[i]);
		}
	}
    throw Intern::FormNotFoundException();
	return (NULL);
} 
