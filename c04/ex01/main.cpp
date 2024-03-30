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
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout<<GREEN<<"standard tests----------------------------------------"<<std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout<<GREEN<<"------------------------------------------------------"<<std::endl;
	int				arraySize = 6;
	const Animal*	animalArray[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		if (i%2 == 0)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
		std::cout<<RED<<"CREATE : "<<i<<std::endl<<std::endl;
	}
	std::cout<<GREEN<<"                     + Deleting +                     "<<std::endl;

	for (int i = 0; i < arraySize; i++)
	{
		delete animalArray[i];
		std::cout<<RED<<"DELETE : "<<i<<std::endl<<std::endl;
	}
	std::cout<<GREEN<<"------------------------------------------------------"<<std::endl;
	const Cat* cat1 = new Cat();
	const Cat cat2(*cat1);
	delete cat1;
	std::cout<<RED<<"DELETED cat1"<<std::endl;
	cat2.makeSound();

	std::cout<<GREEN<<"------------------------------------------------------"<<std::endl;
	const Dog* dog1 = new Dog();
	const Dog dog2(*dog1);
	delete dog1;
	std::cout<<RED<<"DELETED dog1"<<std::endl;
	dog2.makeSound();
	std::cout<<GREEN<<"------------------------------------------------------"<<std::endl;

	return (0);
}