/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:31:50 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:31:50 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout<<CYAN<<"Cat default constructor called"<<std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::~Cat() {
	delete this->_brain;
	std::cout<<CYAN<<"Cat destructor called"<<std::endl;
}

Cat::Cat(Cat const &other) {
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	std::cout<<CYAN<<"Cat copy constructor called"<<std::endl;
}

Cat& Cat::operator=(Cat const &other) {
	if (this != &other)
	{
		this->setType(other.getType());
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
	}
	return *this;
	std::cout<<CYAN<<"Cat Copy Assignment operator called"<< std::endl;
}

void Cat::makeSound() const {
	std::cout<<BOLD<<CYAN<<"//Meowwww"<<RESET<<std::endl;
}