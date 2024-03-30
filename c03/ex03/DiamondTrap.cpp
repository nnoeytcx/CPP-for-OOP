/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 08:20:46 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 08:20:46 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::_HP = 100;
	ScavTrap::_EP = 50;
	FragTrap::_AD = 30;
    std::cout<<BLK<<"DiamondTrap String Constructor called"<<std::endl;
}
DiamondTrap::~DiamondTrap(void)
{
    std::cout<<BLK<<"DiamondTrap Destructor called"<<std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout<<WHT<<"DiamondTrap name is "<<this->_name<<", ClapTrap name is "<<ClapTrap::_name<<std::endl;
}