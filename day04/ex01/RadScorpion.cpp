/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:02:57 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:15:08 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
  return;
}

RadScorpion::~RadScorpion(void)
{
  std::cout << "* SPROTCH *" << std::endl;
}
RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(80, "RadScorpion")
{
  *this = src;
  std::cout << "* click click click *" << std::endl;

  return;
}
RadScorpion& RadScorpion::operator=(RadScorpion const & rhs)
{
    Enemy::operator=(rhs);
    return *this;
}
