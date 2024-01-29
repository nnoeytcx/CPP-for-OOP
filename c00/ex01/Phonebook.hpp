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
#include <string>
#include "Contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void get_com(std::string str);
	private:
		int index;
		int	no_contact;
		Contact contact[8];
		int checkInput(std::string str);
		int checkDigit(std::string str);
		void add(void);
		void search(void);
		void show_contact(void);
		void print_str(Contact contact, int field);
};
