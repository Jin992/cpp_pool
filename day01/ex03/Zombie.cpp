/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:50:03 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 12:05:55 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
    return;
}

Zombie::Zombie() {
    return;
}

Zombie::~Zombie() {
    return;
}

void Zombie::announce() const {
    std::cout << "<" << this->name << "(" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
    return;
}

void Zombie::set_type(std::string type) {
    this->type = type;
    return;
}

void Zombie::set_name(std::string name) {
    this->name = name;
    return;
}