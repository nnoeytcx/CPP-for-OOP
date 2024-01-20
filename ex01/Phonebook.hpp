/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:30:13 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/20 04:20:33 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void add(void);
		void search(void);
	private:
		int index;
		Contact contact[8];
};
