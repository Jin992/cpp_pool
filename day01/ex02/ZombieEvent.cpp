/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:20:14 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 11:54:01 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    return;
}

ZombieEvent::~ZombieEvent() {
    return;
}

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie(name, this->type);

    return zombie;
}

void ZombieEvent::randomChump() {
    std::string random[8] = {"first", "second", "third", "fourth", "fifth", "Bob", "Junius", "Kuthadzo"};

    Zombie *zombie = this->newZombie(random[rand() % 8]);
    zombie->announce();

    delete zombie;
}