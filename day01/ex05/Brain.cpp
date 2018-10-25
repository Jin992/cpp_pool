/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:30:53 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 15:20:56 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

std::string	Brain::identify() const
{
	std::ostringstream	ss;

	ss << (void const*)this;
	
	std::string ad = ss.str();

	return (ad);
}
