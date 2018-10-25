/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 20:18:21 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 22:30:05 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
  std::cout << "Tactical Marine ready for battle" << std::endl;

  return;
}

TacticalMarine::~TacticalMarine(void)
{
  std::cout << "Aaargh ..." << std::endl;

  return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
  *this = src;
  std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
    if (this != &rhs) {}
    return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
  return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
  std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
  std::cout << "* attacks with chainsword *" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
  std::cout << "* attacks with bolter *" << std::endl;
}
