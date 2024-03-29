/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:30:09 by tpoungla          #+#    #+#             */
/*   Updated: 2024/02/09 20:45:17 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::add(void)
{
    //std::cout<<"(PhoneBook try add)"<<"\n";

    std::string prompt[5] = {"  Firstname : ", "  Lastname : ", "  Nickname : ", "  Phonenumber : ", "  Darkestsecret : "};
	std::string	input[5];

	for (int i = 0; i < 5; i++)
	{
        
		std::cout << prompt[i] ;
		std::getline(std::cin, input[i]);
        if (checkInput(input[i]))
        {
            if (std::cin.eof())
                break;
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
    if (field<2)
        std::cout<<"|";
}

void Phonebook::show_contact(void)
{
    std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME" << std::endl;
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
    std::string input;
    int target;

    //std::cout<<"(PhoneBook try search)"<<"\n";
    show_contact();
    std::cout << "Enter index  : ";
	std::getline(std::cin, input);
    if(checkInput(input) || checkDigit(input))
        std::cout<<"Enter index number pls!"<<std::endl;
    else
    {
        target = stoi(input);
        if (target >= no_contact)
            std::cout<<"Enter valid index pls!"<<std::endl;
        else
        {
            std::cout<<"Firstname    : ";
	        std::cout<<contact[target].getfirstname() << std::endl;
	        std::cout<<"Lastname     : ";
	        std::cout<<contact[target].getlastname() << std::endl;
	        std::cout<<"Nickname     : ";
	        std::cout<<contact[target].getnickname() << std::endl;
	        std::cout<<"Phonenumber  : ";
	        std::cout<<contact[target].getphonenumber() << std::endl;
	        std::cout<<"Darkestsecret: ";
	        std::cout<<contact[target].getdarkestsecret() << std::endl;
        }
    }
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
		if (c != '\r' || c != '\n' || c != '\f' )
		    return (0);
	    if (c != '\v' || c != '\t' || c != ' ' )
			return (0);
	}
	return (1);
}

int	Phonebook::checkDigit(std::string str)
{
	for (int i = 0 ; i < str.length() ; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);
}