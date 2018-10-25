/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:29:06 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:19:21 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh ..." << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(170, "Super Mutant") {
    *this = src;
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    Enemy::operator=(rhs);
    return *this;
}

void SuperMutant::takeDamage(int amount) {
    if (_hp > 0 && amount > 3) {
        this->_hp = this->_hp - (amount - 3);
    }
}
