/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:48:20 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 17:18:10 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_CHARACTER_HPP
#define PISCINE_CPP_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:

    Character(void);
    Character(std::string const & name);
    ~Character();
    Character(Character const & src);
    Character   &operator=(Character const & rhs);

    void                recoverAP();
    void                arsenal(AWeapon * weapon);
    void                attack(Enemy * target);
    std::string const   & getName() const;
    int                 getAP() const;
    AWeapon const       * getWeapon() const;

private:
    std::string   _name;
    int           _ap;
    AWeapon   *   _weapon;
};

std::ostream    &operator<<(std::ostream & os, Character const & rhs);

#endif
