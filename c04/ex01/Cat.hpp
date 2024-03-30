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
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat const &other);
		Cat& operator=(Cat const &other);

		void makeSound() const;
	private:
		Brain *_brain;
};

#endif