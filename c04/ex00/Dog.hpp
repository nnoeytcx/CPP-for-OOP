/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:32:05 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:32:05 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog const &Dog);
		Dog& operator=(Dog const &Dog);

		void makeSound() const;
};

#endif