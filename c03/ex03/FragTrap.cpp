/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 07:53:13 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 07:53:13 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->_HP = 10;
    this->_EP = 100;
    this->_AD = 30;
    std::cout<<YELLOW<<"FragTrap String Constructor called"<<std::endl;
}
FragTrap::~FragTrap(void)
{
    std::cout<<YELLOW<<"FragTrap Destructor called"<<std::endl;
}

void	FragTrap::highFivesGuys(void)
{
    std::cout<<BLUE<<"Let's High Fivessssss !!!"<<std::endl;
}
