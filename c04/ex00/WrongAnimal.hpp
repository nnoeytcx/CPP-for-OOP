/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 18:56:24 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 18:56:24 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal(void);
        WrongAnimal &operator=(const WrongAnimal &other);

        std::string getType(void) const;
        void makeSound(void) const;
        void setType(std::string type);
    protected:
        std::string _type;
};

#endif