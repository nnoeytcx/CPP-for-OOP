/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:32:01 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:32:01 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout<<YELLOW<<"Dog default constructor called"<<std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::~Dog() {
	delete this->_brain;
	std::cout<<YELLOW<<"Dog destructor called"<<std::endl;
}

Dog::Dog(Dog const &other) {
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	std::cout<<YELLOW<<"Dog copy constructor called"<<std::endl;
}

Dog& Dog::operator=(Dog const &other) {
	if (this != &other)
	{
		this->setType(other.getType());
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
	}
	return *this;
	std::cout<<YELLOW<<"Dog Copy Assignment operator called"<< std::endl;
}

void Dog::makeSound() const {
	std::cout<<BOLD<<YELLOW<<"//Woof woof"<<RESET<<std::endl;
}