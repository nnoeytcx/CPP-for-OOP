/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:02:38 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/17 16:02:38 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::~HumanB()
{

}
void    HumanB::setWeapon (Weapon &weapon)
{
    this->weapon = &weapon;
}
void    HumanB::attack(void)   
{
    std::cout<<this->name;
    std::cout<<" attacks with their ";
    std::cout<<this->weapon->getType();
    std::cout<<std::endl;
}