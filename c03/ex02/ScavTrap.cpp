/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-29 20:56:44 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-29 20:56:44 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->_HP = 100;
    this->_EP = 50;
    this->_AD = 20;
    std::cout<<YELLOW<<"ScavTrap String Constructor called"<<std::endl;
}
ScavTrap::~ScavTrap(void)
{
    std::cout<<YELLOW<<"ScavTrap Destructor called"<<std::endl;
}

void	ScavTrap::guardGate()
{
    std::cout<<BLUE<<"ScavTrap is now in Gatekeeper mode."<<std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_EP <= 0 || this->_HP <= 0)
	{
		std::cout<<GREEN<<"ScavTrap "<<this->_name<<" not able to attack anymore."<< std::endl;
		return ;
	}
	this->_EP--;
	std::cout<<GREEN<<"ScavTrap "<<this->_name<<" attacks "<<target<<" ,causing "<<this->_AD<<" points of damage!"<<std::endl;
}
