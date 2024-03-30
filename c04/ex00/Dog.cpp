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
	this->setType("Dog");
	std::cout<<YELLOW<<"Dog default constructor called"<<std::endl;
}

Dog::~Dog() {
	std::cout<<YELLOW<<"Dog destructor called"<<std::endl;
}

Dog::Dog(Dog const &Dog) {
	*this = Dog;
	std::cout<<YELLOW<<"Dog copy constructor called"<<std::endl;
}

Dog& Dog::operator=(Dog const &Dog) {
	if (this != &Dog)
		this->setType(Dog.getType());
	return *this;
	std::cout<<YELLOW<<"Dog Copy Assignment operator called"<< std::endl;
}

void Dog::makeSound() const {
	std::cout<<BOLD<<YELLOW<<"//Woof woof"<<RESET<<std::endl;
}