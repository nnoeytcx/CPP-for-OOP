/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:01:32 by tpoungla          #+#    #+#             */
/*   Updated: 2024/02/09 12:45:12 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string name = "HI THIS IS BRAIN";
    std::string& ref = name;
    std::string *ptr = &name;

    std::cout << "Print address" << std::endl;
    std::cout << "Address of str : " << &name << std::endl;
    std::cout << "Address of ptr : " << ptr << std::endl;
    std::cout << "Address of ref : " << &ref << std::endl;

    std::cout << "Value" << std::endl;
    std::cout << "Value of str : " << name << std::endl;
    std::cout << "Value of ptr : " << *ptr << std::endl;
    std::cout << "Value of ref : " << ref << std::endl;
}