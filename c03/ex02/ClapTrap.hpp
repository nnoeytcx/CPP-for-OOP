/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-29 18:58:13 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-29 18:58:13 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class ClapTrap {
    public :
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ~ClapTrap(void);
        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        int getHP();
        int getEP();
        int getAD();

        void printStatus(void);
    protected :
        int         _HP;
        int         _EP;
        int         _AD;
        std::string _name;

};

#endif 