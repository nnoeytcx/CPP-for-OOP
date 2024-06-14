/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:01:49 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/14 00:01:49 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string.h>

const std::string BLK = "\033[30m";
const std::string WHT = "\033[37m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";
const std::string BOLD = "\u001b[1m";

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat(void);
        Bureaucrat &operator=(const Bureaucrat &other);
        //The & means that it returns a reference to class bureaucrat.

        const std::string getName(void) const;
        const int getGrade(void) const;

        void incrementGrade();
		void decrementGrade();

        class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
    private:
        std::string     _name;
        int             _grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i);

#endif