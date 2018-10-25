/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:56:04 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 22:20:01 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
  std::cout << "* teleports from space *" << std::endl;

  return;
}

AssaultTerminator::~AssaultTerminator(void)
{
  std::cout << "I’ll be back ..." << std::endl;

  return;
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
  *this = src;
  std::cout << "* teleports from space *" << std::endl;

  return;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
    if(this != &rhs)
    {
      *this = rhs;
    }
    return *this;
}


ISpaceMarine* AssaultTerminator::clone() const { return (new AssaultTerminator()); }
void AssaultTerminator::rangedAttack() const { std::cout << "* does nothing *" << std::endl; }
void AssaultTerminator::battleCry() const { std::cout << "This code is unclean. PURIFY IT !" << std::endl; }
void AssaultTerminator::meleeAttack() const { std::cout << "* attacks with chainfists *" << std::endl; }
