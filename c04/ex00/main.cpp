/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:22:01 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:22:01 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout <<RED<< j->getType() << " " << std::endl;
	std::cout <<RED<< i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout <<WHT<< "-----------------------------------------------------" << std::endl;
	std::cout << "+++++++++++++++Testing for WrongAnimal+++++++++++++++" << std::endl;
	const WrongAnimal* wc = new WrongCat();
	wc->makeSound();

	delete wc;

	std::cout <<WHT<< "-----------------------------------------------------" << std::endl;
	std::cout << "+++++Testing for normal used and Easy to explain+++++" << std::endl;

	const Animal* cat1 = new Cat();
	const Animal* dog1 = new Dog();
	const WrongAnimal* cat2 = new WrongCat();

	cat1->makeSound();
	dog1->makeSound();
	cat2->makeSound();

	delete cat1;
	delete dog1;
	delete cat2;

	std::cout <<WHT<< "-----------------------------------------------------" << std::endl;
	std::cout << "+Testing for multiple type of animal in only 1 array+" << std::endl;

	const Animal *acat = new Cat();
	const Animal *adog = new Dog();

	const Animal *animal[2];

	animal[0] = acat;
	animal[1] = adog;

	animal[0]->makeSound();
	animal[1]->makeSound();

	delete acat;
	delete adog;

	return 0;
}