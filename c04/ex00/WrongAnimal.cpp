/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 18:56:29 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 18:56:29 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->_type = "WrongAnimal";
    std::cout<<"\033[34m"<<"WrongAnimal Default Constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout<<"\033[34m"<<"WrongAnimal String Constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout<<"\033[34m"<<"WrongAnimal Copy Constructor called"<< std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout<<"\033[34m"<<"WrongAnimal Destructor called"<< std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
    std::cout<<"\033[34m"<<"WrongAnimal Copy Assignment operator called"<< std::endl;
}


std::string WrongAnimal::getType(void) const
{
    return(this->_type);
}
void WrongAnimal::makeSound(void) const
{
    std::cout<<"\u001b[1m"<<"\033[34m"<<"//some WrongAnimal sound <definitely not Meow or Bark>"<<"\033[0m"<<std::endl;
}
void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}