/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:30:17 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/20 03:44:28 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
	public:
		std::string		getfirstname();
		std::string		getlastname();
		std::string		getnickname();
		std::string		getphonenumber();
		std::string		getdarkestsecret();
		void			setdata(std::string input[5]);
	private:
		std::string		firstname;
		std::string		lastname;
		std::string		nickname;
		std::string		phonenumber;
		std::string		darkestsecret;
};