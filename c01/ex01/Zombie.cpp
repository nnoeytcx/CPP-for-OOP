/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:26:08 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/30 17:11:32 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	//std::cout<<"(Zombie has woken up!)"<<std::endl;
    return ;
}

Zombie::~Zombie(void)
{
	//std::cout<<"(Zombie has gone!)"<<std::endl;
    return ;
}

void Zombie::named(std::string name)
{
    this->name = name;
    //std::cout<<"(Zombie "<<name<<" has woken up!)"<<"\n";
}

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}