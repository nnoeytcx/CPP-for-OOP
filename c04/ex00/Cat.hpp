/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 14:31:58 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 14:31:58 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat const &cat);
		Cat& operator=(Cat const &cat);

		void makeSound() const;
};

#endif