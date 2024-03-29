/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-23 10:41:47 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-23 10:41:47 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed           a(15);
    Fixed const     b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << "++a = "<< ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << "a++ = "<< a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "--a = "<< --a << std::endl;
    std::cout << a << std::endl;
    std::cout << "a-- = "<< a-- << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << "a + b = "<< a+b << std::endl;
    std::cout << "a - b = "<< a-b << std::endl;
    std::cout << "a * b = "<< a*b << std::endl;
    std::cout << "a / b = "<< a/b << std::endl;


    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}