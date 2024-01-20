/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:30:20 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/20 03:45:37 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getfirstname()
{
	return(this->firstname);
}

std::string Contact::getlastname()
{
	return(this->lastname);
}

std::string Contact::getnickname()
{
	return(this->nickname);
}

std::string Contact::getphonenumber()
{
	return(this->phonenumber);
}

std::string Contact::getdarkestsecret()
{
	return(this->darkestsecret);
}