/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:38:42 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 18:08:21 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP_INCLUDED__
#define __HUMANA_HPP_INCLUDED__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon* wep;
        std::string name;
    public:
        HumanA(std::string name, Weapon& mainWeap);
        HumanA(std::string name);
        void    setWeapon(Weapon& val);
        void    attack();
};

#endif
