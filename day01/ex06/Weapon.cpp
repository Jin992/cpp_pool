/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:35:59 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 17:56:22 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string val) {
    type = val;
}

void Weapon::setType(std::string val) {
    type = val;
}

std::string const Weapon::getType(void) {
    return (type);
}
