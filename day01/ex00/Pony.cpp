/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:25:13 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 10:31:18 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony(std::string tail, int teeth) : teeth(teeth), tail(tail){
	std::cout << "Pony was made!!! tail:" << tail << " teeth:" << teeth << std::endl;
	return;
}

Pony::~Pony(){
	std::cout << "Class destructer was called " << this->tail << " " <<this->teeth << std::endl;
	return;
}

