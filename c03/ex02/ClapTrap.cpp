/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-29 19:58:16 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-29 19:58:16 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_HP = 10;
    this->_EP = 10;
    this->_AD = 0;
    std::cout<<MAGENTA<<"ClapTrap String Constructor called"<< std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->_name = other._name;
    this->_HP = other._HP;
    this->_EP = other._EP;
    this->_AD = other._AD;
    std::cout<<MAGENTA<<"ClapTrap Copy Constructor called"<< std::endl;
}
ClapTrap::~ClapTrap(void)
{
    std::cout<<MAGENTA<<"ClapTrap Destructor called"<< std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
        *this = other;
    return (*this);
    std::cout<<MAGENTA<<"ClapTrap Copy assignment operator called"<< std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EP <= 0 || this->_HP <= 0)
	{
		std::cout<<CYAN<<"ClapTrap "<<this->_name<<" not able to attack anymore."<< std::endl;
		return ;
	}
	this->_EP--;
	std::cout<<CYAN<<"ClapTrap "<<this->_name<<" attacks "<<target<<" ,causing "<<this->_AD<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HP -= amount;
	std::cout<<CYAN<<"ClapTrap "<<this->_name<<" take Damage and loss "<<amount<<" HP."<<std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EP <= 0 || this->_HP <= 0)
	{
		std::cout<<CYAN<<"ClapTrap "<<this->_name<<" not able to be repaired."<<std::endl;
		return ;
	}
    this->_EP --;
    this->_HP += amount;
    std::cout<<CYAN<<"ClapTrap "<<this->_name<<" has be Repaired with "<<amount<<" HP."<<std::endl;
}

void	ClapTrap::printStatus(void)
{
	std::cout<<RED<<"-----"<<this->_name<<"-----"<<std::endl;
	std::cout<<RED<<"hit point: "<<this->_HP<<std::endl;
	std::cout<<RED<<"energy point: "<<this->_EP<<std::endl;
	std::cout<<RED<<"attack damage: "<<this->_AD<<std::endl;

	
}

int ClapTrap::getHP()
{
    return(this->_HP);
}
int ClapTrap::getEP()
{
    return(this->_EP);
}
int ClapTrap::getAD()
{
    return(this->_AD);
}