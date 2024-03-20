/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:10:47 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/20 01:10:47 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
	this->func_ptr[0] = &Harl::debug;
	this->func_ptr[1] = &Harl::info;
	this->func_ptr[2] = &Harl::warning;
	this->func_ptr[3] = &Harl::error;
}
Harl::~Harl(void)
{

}
void	Harl::debug(void)
{
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void	Harl::complain(std::string level)
{
    int i;

    for (i = 0;i < 4;i++)
    {
        if ((this->level)[i] == level)
        {
            (this->*func_ptr[i])();
            return;
        }
    }
    std::cout<<"Please check your input."<<std::endl;
    return;
}