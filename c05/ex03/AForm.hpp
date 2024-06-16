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

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string.h>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm(void);
        AForm(const std::string name, const int _sign_grade, const int _exec_grade);
        virtual ~AForm(void) = 0;
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);

        void beSigned(Bureaucrat &bureaucrat);

        const std::string getName(void) const;
        const bool getSigned(void) const;
        const int getSignedGrade(void) const;
        const int getExecGrade(void) const;

        class IsNotSignException: public std::exception{
			public:
				const char* what() const throw();
		};
        class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
    private:
        const std::string       _name;
        bool                    _signed;
        const int               _sign_grade;
        const int               _exec_grade;
};

std::ostream & operator<<(std::ostream &o, AForm const &i);

#endif