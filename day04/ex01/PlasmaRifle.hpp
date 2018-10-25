/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:05:05 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:04:31 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:

    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const & src);
    ~PlasmaRifle(void);
    PlasmaRifle & operator=(PlasmaRifle const & rhs);

    void attack(void) const;


private:

    std::string _name;
};

#endif
