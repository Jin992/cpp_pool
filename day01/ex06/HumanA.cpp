/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:40:52 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 18:09:49 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& mainWeap){
    this->name = name;
    wep = &mainWeap;
}
HumanA::HumanA(std::string name){
    this->name = name;
}
void    HumanA::setWeapon(Weapon& val){
    wep = &val;
}
void    HumanA::attack(){
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
