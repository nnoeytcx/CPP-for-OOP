/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:02:32 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/17 16:02:32 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}
HumanA::~HumanA()
{

}
void HumanA::attack(void)
{
    std::cout<<this->name;
    std::cout<<" attacks with their ";
    std::cout<<this->weapon->getType();
    std::cout<<std::endl;
}