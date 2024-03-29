/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:11:21 by tpoungla          #+#    #+#             */
/*   Updated: 2024/02/09 20:32:59 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string	str;
	Phonebook	phonebook;

	while (1 && !std::cin.eof())
	{
		std::cout<<"let's use this awesome phonebook : ";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			//std::cout<<"we get : [ADD]"<<"\n";
			phonebook.get_com("add");
		}
		else if (str == "SEARCH")
		{
			//std::cout<<"we get : [SEARCH]"<<"\n";
			phonebook.get_com("search");
		}
		else if (str == "EXIT")
			exit(0);
		else
		{
			std::cout<<"oh, you don't know how to use this awesome phonebook aren't you?"<<"\n";
			std::cout<<"choose one : [ADD] [SEARCH] [EXIT]"<<"\n";
		}
	}
}