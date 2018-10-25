/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:06:19 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 12:50:37 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N) {
    std::string random[8] = {"first", "second", "third", "fourth", "fifth", "Bob", "Junius", "Kuthadzo"};

    this->_zombies = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        this->_zombies[i].set_name(random[rand() % 8]);
    }

    return;
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->_N; ++i) {
        this->_zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
    delete[] _zombies;
    return;
}