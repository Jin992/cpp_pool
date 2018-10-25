/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 09:07:22 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 10:32:51 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    this->birth();
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::birth() {
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}