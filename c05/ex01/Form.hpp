/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:14:03 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/14 18:14:03 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string.h>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        Form(const std::string name, const int _sign_grade, const int _exec_grade);
        ~Form(void);
        Form(const Form &other);
        Form &operator=(const Form &other);

        void beSigned(Bureaucrat &bureaucrat);

        const std::string getName(void) const;
        const bool getSigned(void) const;
        const int getSignedGrade(void) const;
        const int getExecGrade(void) const;

        class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
        };
    private:
        const std::string       _name;
        bool                    _signed;
        const int               _sign_grade;
        const int               _exec_grade;
};

std::ostream & operator<<(std::ostream &o, Form const &i);

#endif