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
	this->setType("Cat");
	std::cout<<CYAN<<"Cat default constructor called"<<std::endl;
}

Cat::~Cat() {
	std::cout<<CYAN<<"Cat destructor called"<<std::endl;
}

Cat::Cat(Cat const &cat) {
	*this = cat;
	std::cout<<CYAN<<"Cat copy constructor called"<<std::endl;
}

Cat& Cat::operator=(Cat const &cat) {
	if (this != &cat)
		this->setType(cat.getType());
	return *this;
	std::cout<<CYAN<<"Cat Copy Assignment operator called"<< std::endl;
}

void Cat::makeSound() const {
	std::cout<<BOLD<<CYAN<<"//Meowwww"<<RESET<<std::endl;
}