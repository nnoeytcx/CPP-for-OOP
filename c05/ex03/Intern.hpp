/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 00:45:04 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/17 00:45:04 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern(void);
        // Intern(const std::string form,const std::string target);
        ~Intern(void);
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);

        AForm *makeForm(const std::string form,const std::string target); 
        // "Intern creates <form>"
        class FormNotFoundException: public std::exception
        {
			public:
				const char* what() const throw();
		};
};

#endif
