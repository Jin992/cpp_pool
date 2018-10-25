/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 16:11:01 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:10:23 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
    return;
}

PowerFist::~PowerFist() {
    return;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon("Power Fist", 8, 50) {
    *this = src;
}

void PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    AWeapon::operator=(rhs);
    return *this;
}
