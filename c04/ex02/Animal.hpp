/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:31:46 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:31:46 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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

class Animal
{
    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal(void) = 0;
        Animal &operator=(const Animal &other);

        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        void setType(std::string type);
    protected:
        std::string _type;
};

#endif