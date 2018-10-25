/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:33:26 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 17:54:21 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WEAPON_HPP_INCLUDED__
#define __WEAPON_HPP_INCLUDED__

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string val);

    void setType(std::string val);

    std::string const getType(void);
};

#endif
