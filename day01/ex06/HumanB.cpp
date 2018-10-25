/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:21:02 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 18:10:09 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &mainWeap) {
    this->name = name;
    wep = &mainWeap;
}

HumanB::HumanB(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &val) {
    wep = &val;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
