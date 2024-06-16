/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:34:18 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/15 01:34:18 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

        void execute(Bureaucrat const &executor) const;
        const std::string getTarget(void) const;

    class CannotOpenfile: public std::exception{
			public:
				const char * what() const throw();

		};
    private:
        std::string       _target;
};

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const &i);

#endif