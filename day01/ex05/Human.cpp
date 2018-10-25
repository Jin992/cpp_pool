/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:50:21 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 15:22:23 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : _brain(Brain())
{
}

const	Brain& Human::getBrain() const
{
	return this->_brain;
}

std::string	Human::identify() const
{
	return	_brain.identify();
}
