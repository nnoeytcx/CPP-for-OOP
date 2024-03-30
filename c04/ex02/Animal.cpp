/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:31:42 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:31:42 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    this->_type = "animal";
    std::cout<<MAGENTA<<"Animal Default Constructor called"<< std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout<<MAGENTA<<"Animal String Constructor called"<< std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout<<MAGENTA<<"Animal Copy Constructor called"<< std::endl;
}
Animal::~Animal(void)
{
    std::cout<<MAGENTA<<"Animal Destructor called"<< std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
    std::cout<<MAGENTA<<"Animal Copy Assignment operator called"<< std::endl;
}


std::string Animal::getType(void) const
{
    return(this->_type);
}
void Animal::makeSound(void) const
{
    std::cout<<BOLD<<RED<<"//some animal sound <definitely not Meow or Bark>"<<RESET<<std::endl;
}
void Animal::setType(std::string type)
{
    this->_type = type;
}