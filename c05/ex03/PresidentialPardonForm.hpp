/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:34:23 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/15 01:34:23 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm
{
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

        void execute(Bureaucrat const &executor) const;
        const std::string getTarget(void) const;

    private:
        std::string       _target;
};

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif