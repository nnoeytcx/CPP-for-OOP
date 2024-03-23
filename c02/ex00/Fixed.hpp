/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-22 16:09:32 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-22 16:09:32 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &fp);
        ~Fixed(void);
        Fixed &operator=(const Fixed &fp);
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
    private:
        int                 value;
        static const int    bits = 8;
};

#endif