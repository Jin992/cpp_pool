/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:05:54 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 17:37:15 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_AWEAPON_HPP
#define PISCINE_CPP_AWEAPON_HPP

#include <iostream>

class AWeapon
{

public:

    AWeapon(void);
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon(void);
    AWeapon(AWeapon const & src);
    AWeapon &operator=(AWeapon const & rhs);

    std::string const &    getName() const;

    int             getAPCost(void) const;
    int             getDamage(void) const;
    virtual void    attack(void) const = 0;

private:
    std::string _name;
    int         _apcost;
    int         _damage;
};

std::ostream &operator<<(std::ostream & o, AWeapon const &copy);

#endif
