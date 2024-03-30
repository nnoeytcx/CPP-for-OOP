/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 18:56:20 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 18:56:20 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->setType("WrongCat");
	std::cout<<"\033[31m"<<"WrongCat default constructor called"<<std::endl;
}

WrongCat::~WrongCat() {
	std::cout<<"\033[31m"<<"WrongCat destructor called"<<std::endl;
}

void WrongCat::makeSound() const {
	std::cout<<"\u001b[1m"<<"\033[31m"<<"//WrongMeowwww"<<"\033[0m"<<std::endl;

}