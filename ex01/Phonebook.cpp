/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:30:09 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/20 05:13:03 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::add(void)
{
    std::cout<<"(PhoneBook try add)"<<"\n";

    std::string prompt[5] = {"  Firstname : ", "  Lastname : ", "  Nickname : ", "  Phonenumber : ", "  Darkestsecret : "};
	std::string	input[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << prompt[i] ;
		std::getline(std::cin, input[i]);
        if (checkInput(input[i]))
        {
            std::cout<<"!Empty Input!"<<std::endl;
            i--;
        }
	}
	this->contact[this->index].setdata(input);
    this->index += 1;
    this->index %= 8;
	this->no_contact += 1;
	if (this->no_contact > 7)
		this->no_contact = 8;
    //std::cout<<"index : "<< index <<std::endl;
    //std::cout<<"contact no : "<< no_contact <<std::endl;
}

void Phonebook::print_str(Contact contact, int field)
{
    std::string info;
    int k;

    if (field == 0)
        info = contact.getfirstname();
    else if (field == 1)
        info = contact.getlastname();
    else if (field == 2)
        info = contact.getnickname();
    
    if (info.length() < 11)
    {
        k = 10 - info.length();
        for(int i = 0; i < k; i++)
            std::cout<< " ";
        std::cout<<info;
    }
    else
    {
        for(int i = 0; i < 9; i++)
            std::cout<<info[i];
        std::cout<<".";
    }
    std::cout<<"|";
}

void Phonebook::show_contact(void)
{
    std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0 ; i < no_contact ; i++)
    {
        std::cout<<"         "<< i << "|";
        for (int j = 0 ; j < 3; j++)
        {
            print_str(contact[i], j);
        }
        std::cout<<std::endl;
    }
}

void Phonebook::search(void)
{
    std::cout<<"(PhoneBook try search)"<<"\n";
    show_contact();
}

Phonebook::Phonebook(void)
{
	std::cout<<"(PhoneBook created)"<<"\n";
    this->index = 0;
    this->no_contact = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout<<"(Phonebook destroyed)"<<"\n";
}

void Phonebook::get_com(std::string str)
{
    if (str == "add")
        this->add();
    if (str == "search")
        this->search();
}

int	Phonebook::checkInput(std::string str)
{
    char c;

    if (str.empty())
        return (1);
	for (int i = 0 ; i < str.length() ; i++)
	{
        c = str[i];
		if (c == '\r' || c == '\n' || c == '\f' )
		    return (1);
	    if (c == '\v' || c == '\t' || c == ' ' )
			return (1);
	}
	return (0);
}