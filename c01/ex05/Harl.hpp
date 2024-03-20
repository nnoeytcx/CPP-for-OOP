/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:10:51 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/20 01:10:51 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        std::string level[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*func_ptr[4])(void);
};

#endif