/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:20:00 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 18:09:22 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP_INCLUDED__
#define __HUMANB_HPP_INCLUDED__

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    Weapon *wep;
    std::string name;
public:
    HumanB(std::string name, Weapon &mainWeap);

    HumanB(std::string name);

    void setWeapon(Weapon &val);

    void attack();
};

#endif
